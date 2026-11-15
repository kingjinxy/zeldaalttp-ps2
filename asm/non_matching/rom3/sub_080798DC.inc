	THUMB_FUNC_START sub_080798DC
sub_080798DC: @ 0x080798DC
	push {r4,r5,lr}
	ldr r0, _080799D8  @ =gRam
	ldr r2, _080799DC  @ =0x00001770
	add r1, r0, r2
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #0
	beq _080798EE
	b _080799FC
_080798EE:
	ldr r5, _080799E0  @ =0x00001702
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #0
	beq _080798FA
	b _080799FC
_080798FA:
	bl sub_08079884
	add r3, r0, #0
	ldr r2, _080799E4  @ =gUnknown_0200CBA0
	add r0, r3, r2
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079914
	ldr r5, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079996
_08079914:
	cmp r1, #36
	bne _08079922
	ldr r1, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #36
	beq _08079996
_08079922:
	add r3, r3, #64
	add r0, r3, r2
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079936
	ldr r5, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079996
_08079936:
	cmp r1, #36
	bne _08079944
	ldr r1, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #36
	beq _08079996
_08079944:
	mov r5, #150
	lsl r5, r5, #4
	add r0, r4, r5
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	mov r1, #0
	ldrsh r3, [r0, r1]
	add r0, r3, r2
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079966
	ldr r5, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079996
_08079966:
	cmp r1, #36
	bne _08079974
	ldr r1, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #36
	beq _08079996
_08079974:
	add r3, r3, #64
	add r0, r3, r2
	ldrb r1, [r0]
	cmp r1, #35
	bne _08079988
	ldr r2, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #35
	beq _08079996
_08079988:
	cmp r1, #36
	bne _080799FC
	ldr r5, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r5
	ldrb r0, [r0]
	cmp r0, #36
	bne _080799FC
_08079996:
	ldr r1, _080799EC  @ =gUnknown_0200CBE0
	add r0, r3, r1
	ldr r2, _080799E4  @ =gUnknown_0200CBA0
	add r1, r3, r2
	ldrb r2, [r1]
	ldrb r0, [r0]
	cmp r0, r2
	beq _080799B8
	ldr r4, _080799F0  @ =gUnknown_0200CBE1
	add r0, r3, r4
	ldr r5, _080799E8  @ =gUnknown_0200CBA1
	add r1, r3, r5
	ldrb r0, [r0]
	ldr r4, _080799D8  @ =gRam
	ldrb r1, [r1]
	cmp r0, r1
	bne _080799FC
_080799B8:
	ldr r1, _080799D8  @ =gRam
	ldr r4, _080799F4  @ =0x00000978
	add r0, r1, r4
	strb r2, [r0]
	ldr r5, _080799E8  @ =gUnknown_0200CBA1
	add r0, r3, r5
	ldrb r2, [r0]
	add r4, r4, #1
	add r0, r1, r4
	strb r2, [r0]
	ldr r5, _080799F8  @ =0x00000B5E
	add r1, r1, r5
	strh r3, [r1]
	mov r0, #1
	b _08079A04
	.byte 0x00
	.byte 0x00
_080799D8:
	.4byte gRam
_080799DC:
	.4byte 0x00001770
_080799E0:
	.4byte 0x00001702
_080799E4:
	.4byte gUnknown_0200CBA0
_080799E8:
	.4byte gUnknown_0200CBA1
_080799EC:
	.4byte gUnknown_0200CBE0
_080799F0:
	.4byte gUnknown_0200CBE1
_080799F4:
	.4byte 0x00000978
_080799F8:
	.4byte 0x00000B5E
_080799FC:
	ldr r0, _08079A0C  @ =0x00000B5E
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
_08079A04:
	pop {r4,r5}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08079A0C:
	.4byte 0x00000B5E
	THUMB_FUNC_END sub_080798DC

