	THUMB_FUNC_START sub_080B9050
sub_080B9050: @ 0x080B9050
	push {r4,r5,lr}
	ldr r1, _080B9090  @ =gRam
	ldr r0, _080B9094  @ =0x00000A02
	add r2, r1, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	ldr r0, _080B9098  @ =0x00000A04
	add r4, r1, r0
	ldrb r0, [r4]
	add r5, r1, #0
	cmp r0, #0
	bne _080B907E
	bl sub_08130FF8
	ldr r1, _080B909C  @ =0x00000CF8
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080B9088
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080B907E:
	ldr r1, _080B9094  @ =0x00000A02
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B90A0
_080B9088:
	bl sub_08126CE0
	b _080B90BA
	.byte 0x00
	.byte 0x00
_080B9090:
	.4byte gRam
_080B9094:
	.4byte 0x00000A02
_080B9098:
	.4byte 0x00000A04
_080B909C:
	.4byte 0x00000CF8
_080B90A0:
	ldr r0, _080B90C0  @ =0x000009AD
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080B90C4  @ =gUnknown_02010740
	ldr r1, _080B90C8  @ =gUnknown_02000A00
	mov r2, #128
	lsl r2, r2, #1
	bl CpuSet
	bl sub_08131DCC
_080B90BA:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B90C0:
	.4byte 0x000009AD
_080B90C4:
	.4byte gUnknown_02010740
_080B90C8:
	.4byte gUnknown_02000A00
	THUMB_FUNC_END sub_080B9050

