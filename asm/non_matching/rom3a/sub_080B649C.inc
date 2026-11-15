	THUMB_FUNC_START sub_080B649C
sub_080B649C: @ 0x080B649C
	push {lr}
	ldr r1, _080B64B8  @ =gUnknown_0816F058
	ldr r0, _080B64BC  @ =gRam
	ldr r2, _080B64C0  @ =0x00000A5A
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B64B8:
	.4byte gUnknown_0816F058
_080B64BC:
	.4byte gRam
_080B64C0:
	.4byte 0x00000A5A
	THUMB_FUNC_END sub_080B649C

