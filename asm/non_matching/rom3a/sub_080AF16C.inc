	THUMB_FUNC_START sub_080AF16C
sub_080AF16C: @ 0x080AF16C
	push {r4,r5,lr}
	mov r2, #4
	ldr r4, _080AF18C  @ =gRam
	ldr r0, _080AF190  @ =0x00000E15
	add r5, r4, r0
	ldr r3, _080AF194  @ =0x00001810
_080AF178:
	add r0, r2, r5
	ldrb r0, [r0]
	cmp r0, #31
	bne _080AF198
	add r1, r4, r3
	ldrb r0, [r1]
	cmp r0, #0
	bne _080AF198
	strb r0, [r1]
	b _080AF19E
_080AF18C:
	.4byte gRam
_080AF190:
	.4byte 0x00000E15
_080AF194:
	.4byte 0x00001810
_080AF198:
	sub r2, r2, #1
	cmp r2, #0
	bge _080AF178
_080AF19E:
	ldr r1, _080AF1E8  @ =0x000016C5
	add r2, r4, r1
	ldrb r1, [r2]
	ldr r3, _080AF1EC  @ =0x000016F1
	add r0, r4, r3
	strb r1, [r0]
	ldr r5, _080AF1F0  @ =0x000016C1
	add r3, r4, r5
	ldrb r1, [r3]
	add r5, r5, #44
	add r0, r4, r5
	strb r1, [r0]
	ldr r1, _080AF1F4  @ =0x00001608
	add r0, r4, r1
	ldrb r1, [r0]
	sub r5, r5, #41
	add r0, r4, r5
	strb r1, [r0]
	ldr r1, _080AF1F8  @ =0x00001609
	add r0, r4, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080AF1FC  @ =0x0000160C
	add r0, r4, r2
	ldrb r1, [r0]
	sub r5, r5, #4
	add r0, r4, r5
	strb r1, [r0]
	ldr r1, _080AF200  @ =0x0000160D
	add r0, r4, r1
	ldrb r0, [r0]
	strb r0, [r3]
	bl sub_0809E394
	pop {r4,r5}
	pop {r0}
	bx r0
_080AF1E8:
	.4byte 0x000016C5
_080AF1EC:
	.4byte 0x000016F1
_080AF1F0:
	.4byte 0x000016C1
_080AF1F4:
	.4byte 0x00001608
_080AF1F8:
	.4byte 0x00001609
_080AF1FC:
	.4byte 0x0000160C
_080AF200:
	.4byte 0x0000160D
	THUMB_FUNC_END sub_080AF16C

