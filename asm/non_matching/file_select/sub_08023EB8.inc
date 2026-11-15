	THUMB_FUNC_START sub_08023EB8
sub_08023EB8: @ 0x08023EB8
	push {r4,r5,lr}
	add r3, r0, #0
	add r5, r1, #0
	ldr r0, [r5, #84]
	add r0, r0, #124
	ldrh r2, [r0]
	add r0, r5, #0
	add r1, r3, #0
	bl sub_08023E14
	ldr r4, [r5, #88]
	ldr r0, [r4, #84]
	add r0, r0, #124
	ldrh r2, [r0]
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08023E14
	ldr r5, [r4, #88]
	ldr r0, [r5, #84]
	add r0, r0, #124
	ldrh r2, [r0]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_08023E14
	ldr r4, [r5, #88]
	add r0, r4, #0
	add r0, r0, #124
	ldrh r2, [r0]
	add r0, r4, #0
	add r1, r5, #0
	bl sub_08023E14
	ldr r1, [r4, #112]
	add r0, r4, #0
	mov r2, #0
	mov r3, #1
	bl sub_0803D4A4
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08023EB8

	.byte 0x00
	.byte 0x00
