	THUMB_FUNC_START sub_080E1544
sub_080E1544: @ 0x080E1544
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080E1570  @ =gRam
	ldr r1, _080E1574  @ =0x00000F92
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080E1578  @ =gUnknown_081768E0
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #2
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
_080E1570:
	.4byte gRam
_080E1574:
	.4byte 0x00000F92
_080E1578:
	.4byte gUnknown_081768E0
	THUMB_FUNC_END sub_080E1544

