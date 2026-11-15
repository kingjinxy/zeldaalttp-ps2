	THUMB_FUNC_START sub_080B1840
sub_080B1840: @ 0x080B1840
	push {lr}
	ldr r1, _080B185C  @ =gRam
	ldr r0, _080B1860  @ =0x00000E15
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080B1868
	ldr r0, _080B1864  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080B1878
	.byte 0x00
	.byte 0x00
_080B185C:
	.4byte gRam
_080B1860:
	.4byte 0x00000E15
_080B1864:
	.4byte 0x000009AD
_080B1868:
	ldr r0, _080B187C  @ =gUnknown_0816E8FC
	ldrb r1, [r2]
	sub r1, r1, #1
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r0, [r1]
	bl _call_via_r0
_080B1878:
	pop {r0}
	bx r0
_080B187C:
	.4byte gUnknown_0816E8FC
	THUMB_FUNC_END sub_080B1840

