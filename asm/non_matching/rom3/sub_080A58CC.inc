	THUMB_FUNC_START sub_080A58CC
sub_080A58CC: @ 0x080A58CC
	push {r4,lr}
	ldr r4, _080A58E4  @ =gRam
	ldr r1, _080A58E8  @ =0x00000964
	add r0, r4, r1
	ldrh r2, [r0]
	ldr r0, _080A58EC  @ =gUnknown_08169CE2
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #255
	bne _080A58F0
	mov r0, #1
	b _080A596A
_080A58E4:
	.4byte gRam
_080A58E8:
	.4byte 0x00000964
_080A58EC:
	.4byte gUnknown_08169CE2
_080A58F0:
	ldrb r1, [r1]
	ldr r2, _080A593C  @ =0x0000096C
	add r0, r4, r2
	strh r1, [r0]
	ldrh r3, [r0]
	ldr r0, _080A5940  @ =gUnknown_0816B407
	add r0, r3, r0
	ldrb r1, [r0]
	add r2, r2, #12
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _080A5944  @ =gUnknown_0816B3AE
	add r0, r3, r0
	ldrb r2, [r0]
	cmp r3, #28
	bls _080A5958
	ldr r1, _080A5948  @ =0x0000178A
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #5
	and r0, r0, r1
	cmp r0, #0
	beq _080A592C
	add r0, r3, #0
	sub r0, r0, #29
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080A594C  @ =gUnknown_0816B3FD
	add r0, r0, r1
	ldrb r2, [r0]
_080A592C:
	mov r0, #255
	and r0, r0, r2
	ldr r2, _080A5950  @ =0x00000974
	add r1, r4, r2
	strh r0, [r1]
	ldr r2, _080A5954  @ =0x00001744
	b _080A5964
	.byte 0x00
	.byte 0x00
_080A593C:
	.4byte 0x0000096C
_080A5940:
	.4byte gUnknown_0816B407
_080A5944:
	.4byte gUnknown_0816B3AE
_080A5948:
	.4byte 0x0000178A
_080A594C:
	.4byte gUnknown_0816B3FD
_080A5950:
	.4byte 0x00000974
_080A5954:
	.4byte 0x00001744
_080A5958:
	mov r0, #255
	and r0, r0, r2
	ldr r2, _080A5970  @ =0x00000974
	add r1, r4, r2
	strh r0, [r1]
	ldr r2, _080A5974  @ =0x00001742
_080A5964:
	add r1, r4, r2
	strb r0, [r1]
	mov r0, #0
_080A596A:
	pop {r4}
	pop {r1}
	bx r1
_080A5970:
	.4byte 0x00000974
_080A5974:
	.4byte 0x00001742
	THUMB_FUNC_END sub_080A58CC

