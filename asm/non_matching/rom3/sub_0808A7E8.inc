	THUMB_FUNC_START sub_0808A7E8
sub_0808A7E8: @ 0x0808A7E8
	push {r4-r7,lr}
	lsl r0, r0, #8
	ldr r5, _0808A8A0  @ =gRam
	ldr r1, _0808A8A4  @ =0x00000BDC
	add r4, r5, r1
	ldrh r1, [r4]
	bl Div
	ldr r1, _0808A8A8  @ =gUnknown_0815363C
	asr r0, r0, #1
	add r0, r0, r1
	ldrb r2, [r0]
	ldr r3, _0808A8AC  @ =0x00000974
	add r0, r5, r3
	strh r2, [r0]
	mov r7, #0
	ldrsh r1, [r0, r7]
	ldrh r0, [r4]
	mul r0, r1, r0
	mov r6, #255
	lsl r6, r6, #8
	and r0, r0, r6
	mov r1, #150
	lsl r1, r1, #4
	add r4, r5, r1
	lsr r3, r0, #7
	strh r3, [r4]
	cmp r2, #0
	beq _0808A898
	ldr r2, _0808A8B0  @ =0x00000BC8
	add r0, r5, r2
	ldrh r0, [r0]
	add r2, r3, r0
	ldr r7, _0808A8B4  @ =0x00000964
	add r1, r5, r7
	strh r2, [r1]
	sub r0, r0, r3
	lsl r0, r0, #16
	mov r1, #0
	strh r1, [r4]
	lsr r2, r0, #16
	cmp r0, #0
	blt _0808A84A
	add r0, r2, #0
	and r0, r0, r6
	cmp r0, #0
	beq _0808A848
	mov r2, #252
_0808A848:
	strh r2, [r4]
_0808A84A:
	ldr r4, _0808A8A0  @ =gRam
	ldr r1, _0808A8B4  @ =0x00000964
	add r0, r4, r1
	ldrh r2, [r0]
	mov r3, #255
	lsl r3, r3, #8
	add r0, r2, #0
	and r0, r0, r3
	cmp r0, #0
	beq _0808A860
	mov r2, #252
_0808A860:
	lsl r1, r2, #24
	and r2, r2, r3
	lsl r0, r2, #8
	orr r0, r0, r1
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	ldrh r1, [r1]
	lsr r3, r0, #16
	orr r3, r3, r1
	ldr r0, _0808A8B8  @ =0x0000FFFF
	cmp r3, r0
	bne _0808A87C
	ldr r3, _0808A8BC  @ =0x0000FCF0
_0808A87C:
	ldr r7, _0808A8AC  @ =0x00000974
	add r2, r4, r7
	strh r3, [r2]
	ldr r1, _0808A8C0  @ =0x00000975
	add r0, r4, r1
	ldrb r1, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r4, r3
	strb r1, [r0]
	ldrb r1, [r2]
	sub r7, r7, #3
	add r0, r4, r7
	strb r1, [r0]
_0808A898:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808A8A0:
	.4byte gRam
_0808A8A4:
	.4byte 0x00000BDC
_0808A8A8:
	.4byte gUnknown_0815363C
_0808A8AC:
	.4byte 0x00000974
_0808A8B0:
	.4byte 0x00000BC8
_0808A8B4:
	.4byte 0x00000964
_0808A8B8:
	.4byte 0x0000FFFF
_0808A8BC:
	.4byte 0x0000FCF0
_0808A8C0:
	.4byte 0x00000975
	THUMB_FUNC_END sub_0808A7E8

