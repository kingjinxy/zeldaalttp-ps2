	THUMB_FUNC_START sub_080E1014
sub_080E1014: @ 0x080E1014
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080E1044  @ =gArrowCount
	ldr r2, _080E1048  @ =gRam
	ldr r4, _080E104C  @ =0x00001002
	add r1, r2, r4
	add r1, r0, r1
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r3, _080E1050  @ =gUnknown_081767DC
	ldr r1, _080E1054  @ =0x00000F62
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	lsl r1, r1, #2
	add r1, r1, r3
	ldr r1, [r1]
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E1044:
	.4byte gArrowCount
_080E1048:
	.4byte gRam
_080E104C:
	.4byte 0x00001002
_080E1050:
	.4byte gUnknown_081767DC
_080E1054:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080E1014

