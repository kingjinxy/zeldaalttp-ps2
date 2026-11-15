	THUMB_FUNC_START sub_080CA400
sub_080CA400: @ 0x080CA400
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _080CA434  @ =gRam
	ldr r2, _080CA438  @ =0x000009AD
	add r1, r0, r2
	ldrb r1, [r1]
	cmp r1, #0
	beq _080CA418
	b _080CA51E
_080CA418:
	ldr r1, _080CA43C  @ =0x00001645
	add r2, r0, r1
	ldrb r0, [r2]
	cmp r0, #0
	bne _080CA424
	b _080CA51E
_080CA424:
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CA440
	bl sub_08132448
	b _080CA51E
_080CA434:
	.4byte gRam
_080CA438:
	.4byte 0x000009AD
_080CA43C:
	.4byte 0x00001645
_080CA440:
	ldr r0, _080CA454  @ =gRam
	ldr r1, _080CA458  @ =0x00001646
	add r3, r0, r1
	ldrb r0, [r3]
	lsr r1, r0, #2
	ldrb r2, [r2]
	cmp r2, r1
	bge _080CA45C
	lsl r0, r2, #4
	b _080CA46A
_080CA454:
	.4byte gRam
_080CA458:
	.4byte 0x00001646
_080CA45C:
	lsl r0, r1, #1
	add r0, r0, r1
	cmp r2, r0
	ble _080CA472
	ldrb r0, [r3]
	sub r0, r0, r2
	lsl r0, r0, #4
_080CA46A:
	bl __divsi3
	add r6, r0, #0
	b _080CA474
_080CA472:
	mov r6, #15
_080CA474:
	mov r2, #0
	mov r12, r2
	lsl r0, r6, #5
	mov r10, r0
	lsl r1, r6, #10
	mov r9, r1
	ldr r7, _080CA4A8  @ =gUnknown_02000C00
_080CA482:
	mov r5, #64
	mov r2, #2
	add r2, r2, r12
	mov r8, r2
_080CA48A:
	mov r1, r12
	add r0, r1, r5
	asr r4, r0, #1
	lsl r1, r4, #1
	ldr r2, _080CA4AC  @ =gUnknown_02000800
	add r0, r1, r2
	ldrh r3, [r0]
	mov r0, #31
	and r0, r0, r3
	sub r2, r0, r6
	cmp r2, #0
	ble _080CA4B0
	add r0, r1, r7
	strh r2, [r0]
	b _080CA4B6
_080CA4A8:
	.4byte gUnknown_02000C00
_080CA4AC:
	.4byte gUnknown_02000800
_080CA4B0:
	add r1, r1, r7
	mov r0, #0
	strh r0, [r1]
_080CA4B6:
	mov r0, #248
	lsl r0, r0, #2
	and r0, r0, r3
	mov r1, r10
	sub r2, r0, r1
	cmp r2, #0
	ble _080CA4CE
	lsl r1, r4, #1
	add r1, r1, r7
	ldrh r0, [r1]
	orr r2, r2, r0
	strh r2, [r1]
_080CA4CE:
	mov r0, #248
	lsl r0, r0, #7
	and r3, r3, r0
	mov r0, r9
	sub r2, r3, r0
	cmp r2, #0
	ble _080CA4E6
	lsl r1, r4, #1
	add r1, r1, r7
	ldrh r0, [r1]
	orr r2, r2, r0
	strh r2, [r1]
_080CA4E6:
	add r5, r5, #16
	cmp r5, #255
	ble _080CA48A
	mov r12, r8
	mov r1, r12
	cmp r1, #15
	ble _080CA482
	ldr r0, _080CA504  @ =gUnknown_02000800
	ldrh r1, [r0]
	cmp r1, #0
	beq _080CA510
	ldr r0, _080CA508  @ =gUnknown_02000C00
	ldr r1, _080CA50C  @ =gUnknown_02000C80
	ldrh r1, [r1]
	b _080CA512
_080CA504:
	.4byte gUnknown_02000800
_080CA508:
	.4byte gUnknown_02000C00
_080CA50C:
	.4byte gUnknown_02000C80
_080CA510:
	ldr r0, _080CA52C  @ =gUnknown_02000C00
_080CA512:
	strh r1, [r0]
	ldr r2, _080CA530  @ =gRam
	ldr r0, _080CA534  @ =0x0000099B
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
_080CA51E:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080CA52C:
	.4byte gUnknown_02000C00
_080CA530:
	.4byte gRam
_080CA534:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_080CA400

