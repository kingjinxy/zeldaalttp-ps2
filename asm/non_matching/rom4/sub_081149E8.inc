	THUMB_FUNC_START sub_081149E8
sub_081149E8: @ 0x081149E8
	push {lr}
	ldr r1, _08114A04  @ =gRam
	ldr r2, _08114A08  @ =0x00001663
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #12
	bne _08114A0C
	add r2, r2, #159
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08114A10
	b _08114A34
	.byte 0x00
	.byte 0x00
_08114A04:
	.4byte gRam
_08114A08:
	.4byte 0x00001663
_08114A0C:
	cmp r0, #13
	beq _08114A14
_08114A10:
	mov r0, #1
	b _08114A38
_08114A14:
	ldr r2, _08114A30  @ =0x00001702
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #2
	beq _08114A28
	add r2, r2, #20
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #2
	bne _08114A34
_08114A28:
	bl sub_08114AD0
	b _08114A38
	.byte 0x00
	.byte 0x00
_08114A30:
	.4byte 0x00001702
_08114A34:
	bl sub_08114A3C
_08114A38:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_081149E8

