	THUMB_FUNC_START sub_080D91B4
sub_080D91B4: @ 0x080D91B4
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, sp
	add r1, r1, #1
	mov r0, sp
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D929E
	ldr r4, _080D92A8  @ =gRam
	ldr r1, _080D92AC  @ =0x000010D2
	add r0, r4, r1
	add r7, r5, r0
	ldrb r6, [r7]
	ldr r2, _080D92B0  @ =0x00001122
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #11
	strb r1, [r0]
	mov r0, sp
	ldrb r1, [r0]
	add r0, r5, #0
	bl sub_080D9580
	ldr r1, _080D92B4  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	ldr r3, _080D92B8  @ =0x00001052
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	mov r1, #127
	and r1, r1, r0
	ldr r0, _080D92BC  @ =gUnknown_0200EC18
	add r2, r1, r0
	ldr r3, _080D92C0  @ =0x00000EE2
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080D92C4  @ =gUnknown_0200ED18
	add r2, r1, r0
	sub r3, r3, #16
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080D92C8  @ =gUnknown_0200EC98
	add r2, r1, r0
	add r3, r3, #48
	add r0, r4, r3
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080D92CC  @ =gUnknown_0200ED98
	add r1, r1, r0
	ldr r2, _080D92D0  @ =0x00000EF2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080D9860
	ldrb r0, [r7]
	and r6, r6, r0
	ldr r3, _080D92D4  @ =0x00000F72
	add r4, r4, r3
	add r4, r5, r4
	ldrb r0, [r4]
	cmp r0, #3
	bhi _080D9288
	add r0, r5, #0
	bl sub_080D98A4
	ldrb r0, [r7]
	and r6, r6, r0
	ldrb r0, [r4]
	cmp r0, #2
	bhi _080D9288
	add r0, r5, #0
	bl sub_080D98CC
	ldrb r0, [r7]
	and r6, r6, r0
	ldrb r0, [r4]
	cmp r0, #1
	bhi _080D9288
	add r0, r5, #0
	bl sub_080D98F4
	ldrb r0, [r7]
	and r6, r6, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080D9288
	add r0, r5, #0
	bl sub_080D9484
	ldrb r0, [r7]
	and r6, r6, r0
_080D9288:
	ldr r0, _080D92A8  @ =gRam
	ldr r1, _080D92AC  @ =0x000010D2
	add r0, r0, r1
	add r0, r5, r0
	strb r6, [r0]
	add r0, r5, #0
	bl sub_080D92D8
	add r0, r5, #0
	bl sub_080C1F70
_080D929E:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D92A8:
	.4byte gRam
_080D92AC:
	.4byte 0x000010D2
_080D92B0:
	.4byte 0x00001122
_080D92B4:
	.4byte gUnknown_03003E74
_080D92B8:
	.4byte 0x00001052
_080D92BC:
	.4byte gUnknown_0200EC18
_080D92C0:
	.4byte 0x00000EE2
_080D92C4:
	.4byte gUnknown_0200ED18
_080D92C8:
	.4byte gUnknown_0200EC98
_080D92CC:
	.4byte gUnknown_0200ED98
_080D92D0:
	.4byte 0x00000EF2
_080D92D4:
	.4byte 0x00000F72
	THUMB_FUNC_END sub_080D91B4

