	THUMB_FUNC_START sub_080399CC
sub_080399CC: @ 0x080399CC
	push {r7,lr}
	mov r7, sp
	ldr r1, _080399E4  @ =gUnknown_03006C80
	ldrb r0, [r1, #6]
	cmp r0, #2
	beq _08039A04
	cmp r0, #2
	bgt _080399E8
	cmp r0, #1
	beq _080399EE
	b _08039A34
	.byte 0x00
	.byte 0x00
_080399E4:
	.4byte gUnknown_03006C80
_080399E8:
	cmp r0, #3
	beq _08039A1C
	b _08039A34
_080399EE:
	ldr r0, _080399FC  @ =gUnknown_03006C80
	ldr r1, [r0, #8]
	ldr r0, _08039A00  @ =0x000003E7
	cmp r1, r0
	bls _08039A04
	mov r0, #1
	b _08039A38
_080399FC:
	.4byte gUnknown_03006C80
_08039A00:
	.4byte 0x000003E7
_08039A04:
	ldr r0, _08039A14  @ =gUnknown_03006C80
	ldr r1, [r0, #8]
	ldr r0, _08039A18  @ =0x00000BB7
	cmp r1, r0
	bls _08039A1C
	mov r0, #2
	b _08039A38
	.byte 0x00
	.byte 0x00
_08039A14:
	.4byte gUnknown_03006C80
_08039A18:
	.4byte 0x00000BB7
_08039A1C:
	ldr r0, _08039A2C  @ =gUnknown_03006C80
	ldr r1, [r0, #8]
	ldr r0, _08039A30  @ =0x00001387
	cmp r1, r0
	bls _08039A34
	mov r0, #3
	b _08039A38
	.byte 0x00
	.byte 0x00
_08039A2C:
	.4byte gUnknown_03006C80
_08039A30:
	.4byte 0x00001387
_08039A34:
	mov r0, #0
	b _08039A38
_08039A38:
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080399CC

	.byte 0x00
	.byte 0x00
