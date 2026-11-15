	THUMB_FUNC_START sub_080FF170
sub_080FF170: @ 0x080FF170
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _080FF238  @ =gRam
	ldr r1, _080FF23C  @ =0x00000F72
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FF188
	b _080FF298
_080FF188:
	ldr r2, _080FF240  @ =0x000009B5
	add r1, r6, r2
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080FF244  @ =0x000009D4
	add r1, r6, r0
	mov r0, #48
	strb r0, [r1]
	ldr r2, _080FF248  @ =0x0000051E
	add r1, r6, r2
	mov r0, #185
	lsl r0, r0, #6
	strh r0, [r1]
	ldr r1, _080FF24C  @ =0x0000051A
	add r0, r6, r1
	mov r5, #63
	strh r5, [r0]
	ldr r2, _080FF250  @ =0x00000998
	add r0, r6, r2
	mov r1, #8
	strb r1, [r0]
	add r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080FF5A8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080FF1CC
	b _080FF2F2
_080FF1CC:
	ldr r0, _080FF254  @ =0x00001092
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FF258  @ =0x00001082
	add r0, r6, r1
	add r3, r4, r0
	ldrb r0, [r3]
	sub r1, r1, #224
	add r2, r6, r1
	add r0, r0, r2
	ldrb r1, [r0]
	cmp r1, #6
	beq _080FF270
	ldr r0, _080FF25C  @ =0x00001052
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080FF260  @ =0x00000996
	add r3, r6, r1
	ldrb r0, [r3]
	lsr r0, r0, #3
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldrb r1, [r3]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080FF21A
	add r0, r4, #0
	bl sub_080C36D8
	ldr r2, _080FF264  @ =0x00000FB2
	add r1, r6, r2
	add r1, r4, r1
	lsl r0, r0, #2
	strb r0, [r1]
_080FF21A:
	add r0, r4, #0
	bl sub_080C4F98
	ldr r1, _080FF268  @ =gUnknown_0817AC38
	ldr r2, _080FF26C  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080FF2F2
_080FF238:
	.4byte gRam
_080FF23C:
	.4byte 0x00000F72
_080FF240:
	.4byte 0x000009B5
_080FF244:
	.4byte 0x000009D4
_080FF248:
	.4byte 0x0000051E
_080FF24C:
	.4byte 0x0000051A
_080FF250:
	.4byte 0x00000998
_080FF254:
	.4byte 0x00001092
_080FF258:
	.4byte 0x00001082
_080FF25C:
	.4byte 0x00001052
_080FF260:
	.4byte 0x00000996
_080FF264:
	.4byte 0x00000FB2
_080FF268:
	.4byte gUnknown_0817AC38
_080FF26C:
	.4byte 0x00000F52
_080FF270:
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080FF290  @ =0x00000FC2
	add r1, r6, r0
	add r2, r4, r1
	ldrb r0, [r3]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r2, _080FF294  @ =0x00001012
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #4
	strb r0, [r1]
	b _080FF2F2
_080FF290:
	.4byte 0x00000FC2
_080FF294:
	.4byte 0x00001012
_080FF298:
	add r0, r5, #0
	bl sub_080C6240
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FF2F2
	add r0, r5, #0
	bl sub_080C5044
	ldr r0, _080FF2F8  @ =0x00001052
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FF2FC  @ =0x00001122
	add r3, r6, r1
	add r3, r5, r3
	ldrb r1, [r3]
	mov r2, #63
	and r2, r2, r1
	ldr r4, _080FF300  @ =gUnknown_0817AC34
	lsl r0, r0, #24
	lsr r0, r0, #26
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r3]
	ldr r2, _080FF304  @ =0x00000FC2
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080FF2F2
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080CA2A4
_080FF2F2:
	pop {r4-r6}
	pop {r0}
	bx r0
_080FF2F8:
	.4byte 0x00001052
_080FF2FC:
	.4byte 0x00001122
_080FF300:
	.4byte gUnknown_0817AC34
_080FF304:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080FF170

