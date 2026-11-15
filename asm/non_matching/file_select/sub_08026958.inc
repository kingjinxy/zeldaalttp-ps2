	THUMB_FUNC_START sub_08026958
sub_08026958: @ 0x08026958
	push {r4-r6,lr}
	add r4, r0, #0
	add r6, r4, #0
	add r6, r6, #124
	ldrh r0, [r6]
	add r5, r4, #0
	add r5, r5, #80
	ldrh r1, [r5]
	bl 0x0800932C
	lsl r0, r0, #16
	lsr r1, r0, #16
	ldr r2, _080269A8  @ =0xFEB80000
	add r0, r0, r2
	lsr r0, r0, #16
	cmp r0, #1
	bls _080269AC
	add r0, r4, #0
	add r0, r0, #122
	ldrh r0, [r0]
	cmp r1, r0
	beq _080269AC
	mov r0, #2
	strb r0, [r4, #20]
	ldrh r0, [r6]
	ldrh r1, [r5]
	bl 0x08008F58
	add r1, r4, #0
	add r1, r1, #120
	strh r0, [r1]
	ldrh r0, [r6]
	ldrh r1, [r5]
	bl 0x080093C8
	add r1, r4, #0
	add r1, r1, #126
	strb r0, [r1]
	b _080269E8
	.byte 0x00
	.byte 0x00
_080269A8:
	.4byte 0xFEB80000
_080269AC:
	mov r0, #1
	strb r0, [r4, #20]
	ldr r0, _080269F0  @ =gUnknown_0201F000
	add r1, r4, #0
	add r1, r1, #82
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r2, _080269F4  @ =gUnknown_08137B10
	ldrb r0, [r4, #10]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r2, [r0]
	ldr r0, [r1]
	bic r0, r0, r2
	str r0, [r1]
	mov r0, #164
	lsl r0, r0, #1
	add r1, r4, #0
	add r1, r1, #124
	ldrh r1, [r1]
	add r2, r4, #0
	add r2, r2, #80
	ldrh r2, [r2]
	bl sub_08014658
	add r0, r4, #0
	mov r1, #18
	bl 0x08003E10
_080269E8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080269F0:
	.4byte gUnknown_0201F000
_080269F4:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08026958

