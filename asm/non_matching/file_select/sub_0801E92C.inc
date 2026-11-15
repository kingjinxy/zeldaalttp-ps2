	THUMB_FUNC_START sub_0801E92C
sub_0801E92C: @ 0x0801E92C
	push {r4,lr}
	add r4, r0, #0
	bl sub_0801EE68
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801E94A
	ldr r0, _0801E950  @ =gUnknown_0813AED4
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
_0801E94A:
	pop {r4}
	pop {r0}
	bx r0
_0801E950:
	.4byte gUnknown_0813AED4
	THUMB_FUNC_END sub_0801E92C

