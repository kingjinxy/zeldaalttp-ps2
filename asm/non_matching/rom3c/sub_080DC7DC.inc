	THUMB_FUNC_START sub_080DC7DC
sub_080DC7DC: @ 0x080DC7DC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r8, r4
	ldr r6, _080DC834  @ =gRam
	ldr r1, _080DC838  @ =0x00001082
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DC844
	ldr r2, _080DC83C  @ =0x00000F52
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080DC808
	add r0, r4, #0
	bl sub_080C6240
_080DC808:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC816
	b _080DC928
_080DC816:
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r0, _080DC840  @ =gUnknown_0817611C
	ldrb r1, [r5]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
	b _080DC928
_080DC834:
	.4byte gRam
_080DC838:
	.4byte 0x00001082
_080DC83C:
	.4byte 0x00000F52
_080DC840:
	.4byte gUnknown_0817611C
_080DC844:
	ldr r1, _080DC8F4  @ =0x00001052
	add r0, r6, r1
	add r7, r4, r0
	ldrb r1, [r7]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080DC85A
	mov r0, #4
	bl sub_080CF388
_080DC85A:
	add r0, r4, #0
	bl sub_080C58F0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DC928
	ldr r2, _080DC8F8  @ =0x00000F52
	add r0, r6, r2
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080DC910
	add r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080DC88C
	add r2, r2, #80
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
_080DC88C:
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	mov r5, #7
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080DC8A4
	mov r0, #94
	mov r1, #0
	bl sub_0812A324
_080DC8A4:
	ldrb r0, [r7]
	lsr r0, r0, #2
	and r0, r0, r5
	ldr r1, _080DC8FC  @ =0x000016C4
	add r2, r6, r1
	ldr r1, _080DC900  @ =gUnknown_08176130
	add r0, r0, r1
	ldrb r0, [r0]
	ldrh r1, [r2]
	add r1, r1, r0
	ldr r2, _080DC904  @ =0x00000EE2
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r6, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldrb r0, [r7]
	lsr r0, r0, #4
	and r0, r0, r5
	mov r1, #182
	lsl r1, r1, #5
	add r2, r6, r1
	ldr r1, _080DC908  @ =gUnknown_08176138
	add r0, r0, r1
	ldrb r0, [r0]
	ldrh r1, [r2]
	add r1, r1, r0
	ldr r2, _080DC90C  @ =0x00000ED2
	add r0, r6, r2
	add r0, r4, r0
	strb r1, [r0]
	add r2, r2, #32
	add r0, r6, r2
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	b _080DC928
_080DC8F4:
	.4byte 0x00001052
_080DC8F8:
	.4byte 0x00000F52
_080DC8FC:
	.4byte 0x000016C4
_080DC900:
	.4byte gUnknown_08176130
_080DC904:
	.4byte 0x00000EE2
_080DC908:
	.4byte gUnknown_08176138
_080DC90C:
	.4byte 0x00000ED2
_080DC910:
	mov r0, r8
	bl Sprite3_Move
	ldr r1, _080DC934  @ =0x00000FC2
	add r0, r6, r1
	add r0, r0, r8
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DC928
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080DC928:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC934:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DC7DC

