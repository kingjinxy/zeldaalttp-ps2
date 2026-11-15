	THUMB_FUNC_START sub_0808D3EC
sub_0808D3EC: @ 0x0808D3EC
	push {r4-r7,lr}
	ldr r5, _0808D450  @ =gRam
	ldr r1, _0808D454  @ =0x000009C6
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #7
	bne _0808D494
	ldr r6, _0808D458  @ =gUnknown_02002287
	ldrb r1, [r6]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	bne _0808D4D4
	mov r0, #183
	lsl r0, r0, #4
	add r7, r5, r0
	ldrh r4, [r7]
	ldr r0, _0808D45C  @ =0x0000FFFF
	cmp r4, r0
	beq _0808D476
	ldr r1, _0808D460  @ =0x0000096C
	add r0, r5, r1
	mov r1, #0
	ldrsh r0, [r0, r1]
	bl sub_080925A4
	ldr r2, _0808D464  @ =gUnknown_08153B36
	asr r1, r4, #1
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	cmp r0, r1
	bne _0808D476
	add r4, r4, #2
	strh r4, [r7]
	cmp r4, #6
	bne _0808D46C
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldrb r0, [r6]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r6]
	ldr r0, _0808D468  @ =0x000009AD
	add r1, r5, r0
	mov r0, #47
	strb r0, [r1]
	b _0808D4D4
_0808D450:
	.4byte gRam
_0808D454:
	.4byte 0x000009C6
_0808D458:
	.4byte gUnknown_02002287
_0808D45C:
	.4byte 0x0000FFFF
_0808D460:
	.4byte 0x0000096C
_0808D464:
	.4byte gUnknown_08153B36
_0808D468:
	.4byte 0x000009AD
_0808D46C:
	mov r0, #71
	mov r1, #0
	bl sub_0812A324
	b _0808D4D4
_0808D476:
	mov r0, #64
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0808D48C  @ =gRam
	mov r1, #183
	lsl r1, r1, #4
	add r0, r0, r1
	ldr r1, _0808D490  @ =0x0000FFFF
	strh r1, [r0]
	b _0808D4D4
_0808D48C:
	.4byte gRam
_0808D490:
	.4byte 0x0000FFFF
_0808D494:
	cmp r0, #98
	bne _0808D4D4
	mov r0, #183
	lsl r0, r0, #4
	add r1, r5, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #22
	bne _0808D4D4
	ldr r2, _0808D4DC  @ =gUnknown_020022E2
	ldrb r0, [r2]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #123
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0808D4E0  @ =0x00000C04
	add r1, r5, r0
	mov r0, #40
	strh r0, [r1]
	ldr r0, _0808D4E4  @ =0x00000C0A
	add r1, r5, r0
	mov r0, #210
	lsl r0, r0, #4
	strh r0, [r1]
	bl sub_08074354
_0808D4D4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808D4DC:
	.4byte gUnknown_020022E2
_0808D4E0:
	.4byte 0x00000C04
_0808D4E4:
	.4byte 0x00000C0A
	THUMB_FUNC_END sub_0808D3EC

