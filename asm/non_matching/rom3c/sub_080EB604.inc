	THUMB_FUNC_START sub_080EB604
sub_080EB604: @ 0x080EB604
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080EBBE8
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EB68E
	ldr r5, _080EB664  @ =gRam
	ldr r1, _080EB668  @ =0x00001072
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EB640
	ldr r2, _080EB66C  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080EB670  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
_080EB640:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EB68E
	add r0, r4, #0
	bl sub_080C5044
	ldr r2, _080EB674  @ =0x000009AC
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #26
	bne _080EB678
	add r0, r4, #0
	bl sub_080EB9F0
	b _080EB68E
_080EB664:
	.4byte gRam
_080EB668:
	.4byte 0x00001072
_080EB66C:
	.4byte 0x00000F52
_080EB670:
	.4byte 0x00000FC2
_080EB674:
	.4byte 0x000009AC
_080EB678:
	ldr r1, _080EB694  @ =gUnknown_0817806C
	ldr r2, _080EB698  @ =0x00000F52
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl _call_via_r1
_080EB68E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EB694:
	.4byte gUnknown_0817806C
_080EB698:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EB604

