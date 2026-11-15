	THUMB_FUNC_START sub_08080428
sub_08080428: @ 0x08080428
	push {r4,lr}
	ldr r4, _08080440  @ =gRam
	ldr r1, _08080444  @ =0x00000968
	add r0, r4, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r0, #2
	bne _08080448
	bl sub_0807F2F8
	b _0808047C
	.byte 0x00
	.byte 0x00
_08080440:
	.4byte gRam
_08080444:
	.4byte 0x00000968
_08080448:
	cmp r0, #8
	bne _08080478
	bl sub_0807F2F8
	ldr r3, _08080470  @ =0x00000B08
	add r0, r4, r3
	ldrh r1, [r0]
	sub r1, r1, #1
	lsl r1, r1, #1
	ldr r2, _08080474  @ =0x000018D0
	add r0, r4, r2
	add r1, r1, r0
	ldrh r2, [r1]
	mov r3, #128
	lsl r3, r3, #6
	add r0, r3, #0
	orr r0, r0, r2
	strh r0, [r1]
	b _0808047C
	.byte 0x00
	.byte 0x00
_08080470:
	.4byte 0x00000B08
_08080474:
	.4byte 0x000018D0
_08080478:
	bl sub_0807F2F8
_0808047C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08080428

	.byte 0x00
	.byte 0x00
