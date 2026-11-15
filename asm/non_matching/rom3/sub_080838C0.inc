	THUMB_FUNC_START sub_080838C0
sub_080838C0: @ 0x080838C0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	ldr r7, _08083904  @ =gRam
	lsl r6, r4, #1
	ldr r0, _08083908  @ =0x0000195C
	add r0, r0, r7
	mov r8, r0
	add r5, r6, r0
	ldrh r0, [r5]
	cmp r0, #0
	beq _08083954
	cmp r0, #1
	bne _08083918
	add r0, r4, #0
	bl sub_08083AE4
	ldr r2, _0808390C  @ =0x0000199C
	add r1, r7, r2
	add r1, r6, r1
	ldr r2, _08083910  @ =gUnknown_081532F6
	ldr r3, _08083914  @ =0x00000B1C
	add r0, r7, r3
	ldrh r0, [r0]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	ldrh r2, [r1]
	add r0, r0, r2
	strh r0, [r1]
	b _0808393A
	.byte 0x00
	.byte 0x00
_08083904:
	.4byte gRam
_08083908:
	.4byte 0x0000195C
_0808390C:
	.4byte 0x0000199C
_08083910:
	.4byte gUnknown_081532F6
_08083914:
	.4byte 0x00000B1C
_08083918:
	cmp r0, #2
	bne _08083948
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080AFE48
	ldr r3, _08083944  @ =0x00000AD2
	add r0, r7, r3
	ldrh r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	cmp r0, #3
	bne _08083954
	add r0, r4, #0
	bl sub_0808373C
_0808393A:
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	b _08083954
	.byte 0x00
	.byte 0x00
_08083944:
	.4byte 0x00000AD2
_08083948:
	cmp r0, #4
	bne _08083954
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080AFEFC
_08083954:
	ldr r1, _0808396C  @ =gRam
	ldr r0, _08083970  @ =0x00000AD2
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0808396C:
	.4byte gRam
_08083970:
	.4byte 0x00000AD2
	THUMB_FUNC_END sub_080838C0

