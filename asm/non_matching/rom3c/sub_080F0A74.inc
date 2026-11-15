	THUMB_FUNC_START sub_080F0A74
sub_080F0A74: @ 0x080F0A74
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _080F0AB0  @ =gRam
	ldr r1, _080F0AB4  @ =0x0000096C
	add r2, r0, r1
	mov r3, #0
	mov r1, #2
	strb r1, [r2]
	ldr r2, _080F0AB8  @ =0x0000096D
	add r1, r0, r2
	strb r3, [r1]
	ldr r1, _080F0ABC  @ =0x00000FB2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsl r1, r1, #4
	ldr r0, _080F0AC0  @ =gUnknown_08178D38
	add r1, r1, r0
	add r0, r4, #0
	bl sub_080C94D0
	add r0, r4, #0
	bl sub_080C6230
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0AB0:
	.4byte gRam
_080F0AB4:
	.4byte 0x0000096C
_080F0AB8:
	.4byte 0x0000096D
_080F0ABC:
	.4byte 0x00000FB2
_080F0AC0:
	.4byte gUnknown_08178D38
	THUMB_FUNC_END sub_080F0A74

