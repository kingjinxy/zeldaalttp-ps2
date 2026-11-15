	THUMB_FUNC_START sub_080D4030
sub_080D4030: @ 0x080D4030
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D4050  @ =gUnknown_08174EDC
	ldr r1, _080D4054  @ =gRam
	ldr r3, _080D4058  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080D4050:
	.4byte gUnknown_08174EDC
_080D4054:
	.4byte gRam
_080D4058:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D4030

