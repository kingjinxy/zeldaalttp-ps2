	THUMB_FUNC_START sub_080D3650
sub_080D3650: @ 0x080D3650
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r0, #26
	add r1, r5, #0
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080D36B8
	ldr r2, _080D36C0  @ =gRam
	ldr r1, _080D36C4  @ =0x00000FB2
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r3, r2, r5
	ldr r1, _080D36C8  @ =gUnknown_08174EA1
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldrh r3, [r3]
	add r1, r1, r3
	ldr r3, _080D36CC  @ =0x00000964
	add r0, r2, r3
	ldrh r3, [r0]
	add r3, r3, #2
	ldr r5, _080D36D0  @ =0x00000EE2
	add r0, r2, r5
	add r0, r4, r0
	strb r1, [r0]
	add r5, r5, #32
	add r0, r2, r5
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080D36D4  @ =0x00000ED2
	add r0, r2, r1
	add r0, r4, r0
	strb r3, [r0]
	sub r5, r5, #16
	add r0, r2, r5
	add r0, r4, r0
	lsr r3, r3, #8
	strb r3, [r0]
	ldr r0, _080D36D8  @ =0x00001052
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080D36B8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D36C0:
	.4byte gRam
_080D36C4:
	.4byte 0x00000FB2
_080D36C8:
	.4byte gUnknown_08174EA1
_080D36CC:
	.4byte 0x00000964
_080D36D0:
	.4byte 0x00000EE2
_080D36D4:
	.4byte 0x00000ED2
_080D36D8:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080D3650

