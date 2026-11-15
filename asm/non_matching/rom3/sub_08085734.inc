	THUMB_FUNC_START sub_08085734
sub_08085734: @ 0x08085734
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r3, _080857BC  @ =gRam
	mov r0, #151
	lsl r0, r0, #4
	add r5, r3, r0
	mov r2, #0
	ldrsh r1, [r5, r2]
	mov r8, r1
	ldr r7, _080857C0  @ =0x00000B08
	add r4, r3, r7
	ldrh r6, [r4]
	mov r0, #7
	and r0, r0, r6
	ldr r2, _080857C4  @ =0x00000968
	add r1, r3, r2
	strh r0, [r1]
	ldrh r2, [r5]
	ldr r0, _080857C8  @ =0x00001FFF
	and r0, r0, r2
	ldr r1, _080857CC  @ =gUnknown_08167790
	ldrh r1, [r1, #18]
	cmp r0, r1
	bge _080857A4
	mov r7, #160
	lsl r7, r7, #3
	add r0, r2, r7
	strh r0, [r5]
	ldrh r0, [r4]
	lsl r0, r0, #1
	ldr r7, _080857D0  @ =0x000018B0
	add r1, r3, r7
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	cmp r0, #65
	bls _0808578A
	mov r1, #128
	lsl r1, r1, #4
	add r0, r2, r1
	strh r0, [r5]
_0808578A:
	ldrh r0, [r4]
	mov r1, #8
	eor r0, r0, r1
	strh r0, [r4]
	bl sub_08084D84
	bl sub_0808A0CC
	ldrh r0, [r4]
	bl sub_080835C8
	mov r2, r8
	strh r2, [r5]
_080857A4:
	ldr r0, _080857BC  @ =gRam
	ldr r7, _080857C0  @ =0x00000B08
	add r0, r0, r7
	strh r6, [r0]
	bl sub_08084FD0
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080857BC:
	.4byte gRam
_080857C0:
	.4byte 0x00000B08
_080857C4:
	.4byte 0x00000968
_080857C8:
	.4byte 0x00001FFF
_080857CC:
	.4byte gUnknown_08167790
_080857D0:
	.4byte 0x000018B0
	THUMB_FUNC_END sub_08085734

