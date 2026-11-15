	THUMB_FUNC_START sub_080FF5A8
sub_080FF5A8: @ 0x080FF5A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r9, r7
	ldr r6, _080FF65C  @ =gRam
	ldr r1, _080FF660  @ =0x00000F62
	add r0, r6, r1
	add r0, r7, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FF620
	ldr r2, _080FF664  @ =0x00001012
	add r5, r6, r2
	add r5, r7, r5
	ldrb r0, [r5]
	mov r8, r0
	ldr r1, _080FF668  @ =0x00001122
	add r4, r6, r1
	add r4, r7, r4
	ldrb r2, [r4]
	mov r10, r2
	mov r0, #1
	strb r0, [r5]
	ldr r2, _080FF66C  @ =gUnknown_0817AC34
	sub r1, r1, #144
	add r0, r6, r1
	add r0, r7, r0
	ldrb r1, [r0]
	lsr r1, r1, #2
	mov r0, #3
	and r1, r1, r0
	add r1, r1, r2
	ldr r3, _080FF670  @ =gUnknown_0817AD54
	ldr r2, _080FF674  @ =0x00000FD2
	add r0, r6, r2
	add r0, r7, r0
	ldrb r2, [r0]
	mov r0, #4
	and r0, r0, r2
	lsl r0, r0, #24
	lsr r0, r0, #26
	add r0, r0, r3
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r4]
	add r0, r7, #0
	bl sub_080C6240
	mov r0, r10
	strb r0, [r4]
	mov r1, r8
	strb r1, [r5]
	mov r0, #1
	bl sub_080C64A0
_080FF620:
	ldr r1, _080FF678  @ =gUnknown_03003E74
	ldrh r0, [r1]
	add r0, r0, #2
	strh r0, [r1]
	ldr r2, _080FF67C  @ =0x00001052
	add r0, r6, r2
	add r0, r0, r9
	ldrb r1, [r0]
	sub r2, r2, #160
	add r0, r6, r2
	add r0, r0, r9
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #5
	ldr r0, _080FF680  @ =gUnknown_0817AC54
	add r1, r1, r0
	mov r0, r9
	mov r2, #4
	bl sub_080C9480
	mov r0, #4
	bl sub_080C64A0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FF65C:
	.4byte gRam
_080FF660:
	.4byte 0x00000F62
_080FF664:
	.4byte 0x00001012
_080FF668:
	.4byte 0x00001122
_080FF66C:
	.4byte gUnknown_0817AC34
_080FF670:
	.4byte gUnknown_0817AD54
_080FF674:
	.4byte 0x00000FD2
_080FF678:
	.4byte gUnknown_03003E74
_080FF67C:
	.4byte 0x00001052
_080FF680:
	.4byte gUnknown_0817AC54
	THUMB_FUNC_END sub_080FF5A8

