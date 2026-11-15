	THUMB_FUNC_START sub_080F47FC
sub_080F47FC: @ 0x080F47FC
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080F4888
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F4876
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl sub_080C5080
	ldr r3, _080F4850  @ =gRam
	ldr r0, _080F4854  @ =0x00000F92
	add r2, r3, r0
	add r2, r4, r2
	ldr r1, _080F4858  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	ldr r2, _080F485C  @ =0x00000CB4
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F4860
	add r0, r4, #0
	mov r1, #211
	mov r2, sp
	bl sub_080C94F4
	b _080F4876
_080F4850:
	.4byte gRam
_080F4854:
	.4byte 0x00000F92
_080F4858:
	.4byte 0x00000996
_080F485C:
	.4byte 0x00000CB4
_080F4860:
	ldr r1, _080F4880  @ =gUnknown_0817964C
	ldr r2, _080F4884  @ =0x00000F52
	add r0, r3, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080F4876:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F4880:
	.4byte gUnknown_0817964C
_080F4884:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F47FC

