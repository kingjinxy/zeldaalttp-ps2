	THUMB_FUNC_START sub_080EB388
sub_080EB388: @ 0x080EB388
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080EB3F4  @ =gRam
	ldr r0, _080EB3F8  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080EB3FC  @ =0x00000F72
	add r0, r6, r2
	add r7, r4, r0
	ldr r2, _080EB400  @ =gUnknown_08177F4C
	ldr r3, _080EB404  @ =0x00000FB2
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	ldrb r2, [r7]
	add r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080EB5CC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EB3EE
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080EB3EE
	add r0, r4, #0
	bl sub_080C5044
	strb r5, [r7]
	ldr r1, _080EB408  @ =gUnknown_08177F50
	ldr r3, _080EB40C  @ =0x00000F52
	add r0, r6, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080EB3EE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080EB3F4:
	.4byte gRam
_080EB3F8:
	.4byte 0x00000F92
_080EB3FC:
	.4byte 0x00000F72
_080EB400:
	.4byte gUnknown_08177F4C
_080EB404:
	.4byte 0x00000FB2
_080EB408:
	.4byte gUnknown_08177F50
_080EB40C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EB388

