	THUMB_FUNC_START sub_0801E8FC
sub_0801E8FC: @ 0x0801E8FC
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #10]
	cmp r0, #0
	bne _0801E914
	ldr r1, _0801E910  @ =gUnknown_0813AEB0
	add r0, r2, #0
	bl 0x08009924
	b _0801E924
_0801E910:
	.4byte gUnknown_0813AEB0
_0801E914:
	ldr r0, _0801E928  @ =gUnknown_0813AEC8
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_0801E924:
	pop {r0}
	bx r0
_0801E928:
	.4byte gUnknown_0813AEC8
	THUMB_FUNC_END sub_0801E8FC

