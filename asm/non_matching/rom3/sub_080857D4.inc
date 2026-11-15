	THUMB_FUNC_START sub_080857D4
sub_080857D4: @ 0x080857D4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r3, _08085858  @ =gRam
	mov r0, #151
	lsl r0, r0, #4
	add r5, r3, r0
	mov r2, #0
	ldrsh r1, [r5, r2]
	mov r8, r1
	ldr r7, _0808585C  @ =0x00000B08
	add r4, r3, r7
	ldrh r6, [r4]
	mov r0, #7
	and r0, r0, r6
	ldr r2, _08085860  @ =0x00000968
	add r1, r3, r2
	strh r0, [r1]
	ldrh r2, [r5]
	ldr r0, _08085864  @ =0x000007FF
	and r0, r0, r2
	ldr r1, _08085868  @ =gUnknown_081677A8
	ldrh r1, [r1, #12]
	cmp r0, r1
	blt _08085840
	add r0, r2, #0
	sub r0, r0, #16
	strh r0, [r5]
	ldrh r0, [r4]
	lsl r0, r0, #1
	ldr r7, _0808586C  @ =0x000018B0
	add r1, r3, r7
	add r0, r0, r1
	ldrh r1, [r0]
	mov r0, #254
	and r0, r0, r1
	cmp r0, #65
	bls _08085826
	add r0, r2, #0
	sub r0, r0, #28
	strh r0, [r5]
_08085826:
	ldrh r0, [r4]
	mov r1, #8
	eor r0, r0, r1
	strh r0, [r4]
	bl sub_0808550C
	bl sub_0808A180
	ldrh r0, [r4]
	bl sub_080835C8
	mov r0, r8
	strh r0, [r5]
_08085840:
	ldr r0, _08085858  @ =gRam
	ldr r1, _0808585C  @ =0x00000B08
	add r0, r0, r1
	strh r6, [r0]
	bl sub_08085258
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08085858:
	.4byte gRam
_0808585C:
	.4byte 0x00000B08
_08085860:
	.4byte 0x00000968
_08085864:
	.4byte 0x000007FF
_08085868:
	.4byte gUnknown_081677A8
_0808586C:
	.4byte 0x000018B0
	THUMB_FUNC_END sub_080857D4

