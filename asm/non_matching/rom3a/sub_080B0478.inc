	THUMB_FUNC_START sub_080B0478
sub_080B0478: @ 0x080B0478
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r2, _080B0528  @ =gUnknown_03003E74
	mov r0, #0
	strh r0, [r2]
	ldr r1, _080B052C  @ =gRam
	ldr r3, _080B0530  @ =0x000017F0
	add r0, r1, r3
	ldrb r5, [r0]
	add r7, r1, #0
	ldr r0, _080B0534  @ =0x00000964
	add r0, r0, r7
	mov r8, r0
	add r6, r2, #0
	ldr r1, _080B0538  @ =gUnknown_0816E8EC
	mov r10, r1
	mov r2, #240
	lsl r2, r2, #6
	mov r9, r2
_080B04A6:
	mov r0, #71
	ldr r3, _080B053C  @ =gUnknown_03002B90
	strh r0, [r3]
	ldr r1, _080B0540  @ =0x00000DCF
	add r0, r7, r1
	add r0, r5, r0
	ldrb r0, [r0]
	sub r0, r0, #8
	mov r2, r8
	strb r0, [r2]
	ldr r3, _080B0544  @ =0x00000DE3
	add r0, r7, r3
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r1, _080B0548  @ =gUnknown_03002B95
	strb r0, [r1]
	ldrh r0, [r6]
	ldrh r1, [r2]
	lsl r4, r5, #1
	mov r3, r10
	add r2, r4, r3
	ldrb r3, [r2]
	mov r2, r9
	orr r3, r3, r2
	mov r2, #0
	str r2, [sp]
	mov r2, #71
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	mov r0, #79
	ldr r3, _080B053C  @ =gUnknown_03002B90
	strh r0, [r3]
	ldrh r0, [r6]
	mov r2, r8
	ldrh r1, [r2]
	add r4, r4, #1
	add r4, r4, r10
	ldrb r3, [r4]
	mov r2, r9
	orr r3, r3, r2
	mov r2, #0
	str r2, [sp]
	mov r2, #79
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	sub r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r0, #0
	bge _080B04A6
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B0528:
	.4byte gUnknown_03003E74
_080B052C:
	.4byte gRam
_080B0530:
	.4byte 0x000017F0
_080B0534:
	.4byte 0x00000964
_080B0538:
	.4byte gUnknown_0816E8EC
_080B053C:
	.4byte gUnknown_03002B90
_080B0540:
	.4byte 0x00000DCF
_080B0544:
	.4byte 0x00000DE3
_080B0548:
	.4byte gUnknown_03002B95
	THUMB_FUNC_END sub_080B0478

