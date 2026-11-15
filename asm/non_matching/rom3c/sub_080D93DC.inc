	THUMB_FUNC_START sub_080D93DC
sub_080D93DC: @ 0x080D93DC
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	mov r2, #254
	lsl r2, r2, #23
	and r2, r2, r1
	lsr r2, r2, #24
	ldr r3, _080D945C  @ =gRam
	ldr r4, _080D9460  @ =gUnknown_0200EC18
	add r1, r2, r4
	ldrb r4, [r1]
	ldr r5, _080D9464  @ =0x00001622
	add r1, r3, r5
	strb r4, [r1]
	ldr r4, _080D9468  @ =gUnknown_0200EC98
	add r1, r2, r4
	ldrb r4, [r1]
	add r5, r5, #1
	add r1, r3, r5
	strb r4, [r1]
	ldr r4, _080D946C  @ =gUnknown_0200ED18
	add r1, r2, r4
	ldrb r4, [r1]
	add r5, r5, #1
	add r1, r3, r5
	strb r4, [r1]
	ldr r1, _080D9470  @ =gUnknown_0200ED98
	add r2, r2, r1
	ldrb r2, [r2]
	ldr r4, _080D9474  @ =0x00001625
	add r1, r3, r4
	strb r2, [r1]
	ldr r1, _080D9478  @ =0x00001122
	add r5, r3, r1
	add r5, r0, r5
	ldrb r4, [r5]
	mov r8, r4
	mov r4, #63
	mov r1, r8
	and r4, r4, r1
	ldr r6, _080D947C  @ =gUnknown_0817595C
	ldr r1, _080D9480  @ =0x00001052
	add r3, r3, r1
	add r3, r0, r3
	ldrb r1, [r3]
	lsr r1, r1, #1
	mov r2, #3
	and r1, r1, r2
	add r1, r1, r6
	ldrb r1, [r1]
	orr r4, r4, r1
	strb r4, [r5]
	bl sub_080C6240
	mov r4, r8
	strb r4, [r5]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080D945C:
	.4byte gRam
_080D9460:
	.4byte gUnknown_0200EC18
_080D9464:
	.4byte 0x00001622
_080D9468:
	.4byte gUnknown_0200EC98
_080D946C:
	.4byte gUnknown_0200ED18
_080D9470:
	.4byte gUnknown_0200ED98
_080D9474:
	.4byte 0x00001625
_080D9478:
	.4byte 0x00001122
_080D947C:
	.4byte gUnknown_0817595C
_080D9480:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D93DC

