	THUMB_FUNC_START sub_0811510C
sub_0811510C: @ 0x0811510C
	push {r4,r5,lr}
	ldr r5, _08115198  @ =gRam
	ldr r1, _0811519C  @ =0x000009AC
	add r0, r5, r1
	ldrb r4, [r0]
	ldr r2, _081151A0  @ =0x000009AD
	add r0, r5, r2
	ldrb r1, [r0]
	add r2, r1, #0
	ldr r3, _081151A4  @ =0x00001770
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811512A
	b _08115338
_0811512A:
	cmp r1, #11
	bne _08115130
	b _08115338
_08115130:
	cmp r4, #9
	bne _0811513A
	cmp r1, #35
	bne _0811513A
	b _08115338
_0811513A:
	cmp r4, #14
	bne _0811514A
	cmp r2, #1
	bne _08115144
	b _08115338
_08115144:
	cmp r2, #2
	bne _0811514A
	b _08115338
_0811514A:
	ldr r0, _081151A8  @ =0x00001719
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #4
	beq _08115158
	mov r0, #12
	strb r0, [r1]
_08115158:
	bl sub_08115CA4
	ldr r1, _081151AC  @ =0x00001663
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08115168
	b _0811533C
_08115168:
	cmp r0, #4
	bne _081151BC
	ldr r2, _081151B0  @ =0x00001754
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r3, _081151B4  @ =gUnknown_0200EBF0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #0
	bne _0811517E
	b _0811529C
_0811517E:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08115188
	b _0811529C
_08115188:
	ldr r1, _081151B8  @ =0x00001758
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r2, r0
	beq _08115194
	b _08115328
_08115194:
	b _0811529C
	.byte 0x00
	.byte 0x00
_08115198:
	.4byte gRam
_0811519C:
	.4byte 0x000009AC
_081151A0:
	.4byte 0x000009AD
_081151A4:
	.4byte 0x00001770
_081151A8:
	.4byte 0x00001719
_081151AC:
	.4byte 0x00001663
_081151B0:
	.4byte 0x00001754
_081151B4:
	.4byte gUnknown_0200EBF0
_081151B8:
	.4byte 0x00001758
_081151BC:
	ldr r2, _08115268  @ =0x00001702
	add r0, r5, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _081151F8
	ldr r3, _0811526C  @ =0x00001718
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #6
	bne _081151F8
	ldr r1, _08115270  @ =0x00001758
	add r0, r5, r1
	add r2, r2, #82
	add r1, r5, r2
	ldrb r0, [r0]
	ldrb r3, [r1]
	cmp r0, r3
	bne _0811520A
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	strb r4, [r1]
	mov r0, #128
	and r4, r4, r0
	cmp r4, #0
	beq _0811520A
	mov r0, #19
	strb r0, [r1]
_081151F8:
	ldr r2, _08115274  @ =gRam
	ldr r1, _08115268  @ =0x00001702
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	bne _0811529C
_0811520A:
	ldr r3, _08115278  @ =0x00001663
	add r2, r5, r3
	ldrb r0, [r2]
	ldr r1, _0811527C  @ =gUnknown_0817E9F0
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _08115280  @ =0x00001757
	add r1, r5, r0
	mov r0, #64
	strb r0, [r1]
	ldr r1, _08115284  @ =0x00001754
	add r0, r5, r1
	ldrb r2, [r0]
	ldr r3, _08115288  @ =gUnknown_0200EBA0
	add r0, r2, r3
	ldrb r1, [r0]
	add r3, r3, #20
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r3, _0811528C  @ =0x00001664
	add r0, r5, r3
	strh r1, [r0]
	ldr r1, _08115290  @ =gUnknown_0200EBC8
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r3, _08115294  @ =gUnknown_0200EBDC
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r2, _08115298  @ =0x00001666
	add r0, r5, r2
	strh r1, [r0]
	mov r3, #161
	lsl r3, r3, #4
	add r0, r5, r3
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r5, r2
	strb r1, [r0]
	bl sub_0811534C
	b _0811533C
	.byte 0x00
	.byte 0x00
_08115268:
	.4byte 0x00001702
_0811526C:
	.4byte 0x00001718
_08115270:
	.4byte 0x00001758
_08115274:
	.4byte gRam
_08115278:
	.4byte 0x00001663
_0811527C:
	.4byte gUnknown_0817E9F0
_08115280:
	.4byte 0x00001757
_08115284:
	.4byte 0x00001754
_08115288:
	.4byte gUnknown_0200EBA0
_0811528C:
	.4byte 0x00001664
_08115290:
	.4byte gUnknown_0200EBC8
_08115294:
	.4byte gUnknown_0200EBDC
_08115298:
	.4byte 0x00001666
_0811529C:
	ldr r3, _081152EC  @ =0x000016D6
	add r0, r5, r3
	ldr r2, _081152F0  @ =0x000016D7
	add r1, r5, r2
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _08115300
	ldr r3, _081152F4  @ =0x00000996
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08115338
	ldr r0, _081152F8  @ =0x00001758
	add r2, r5, r0
	ldr r1, _081152FC  @ =0x00001754
	add r0, r5, r1
	ldrb r1, [r2]
	ldrb r3, [r0]
	cmp r1, r3
	beq _08115338
	add r2, r1, #0
	add r0, r2, #0
	sub r0, r0, #9
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _081152E6
	add r0, r2, #0
	add r0, r0, #20
	lsl r0, r0, #24
	lsr r2, r0, #24
_081152E6:
	cmp r2, r3
	bne _08115328
	b _08115338
_081152EC:
	.4byte 0x000016D6
_081152F0:
	.4byte 0x000016D7
_081152F4:
	.4byte 0x00000996
_081152F8:
	.4byte 0x00001758
_081152FC:
	.4byte 0x00001754
_08115300:
	ldr r2, _08115344  @ =0x00001758
	add r0, r5, r2
	ldrb r2, [r0]
	add r0, r2, #0
	sub r0, r0, #20
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _0811531E
	add r0, r2, #0
	add r0, r0, #20
	lsl r0, r0, #24
	lsr r2, r0, #24
_0811531E:
	ldr r3, _08115348  @ =0x00001754
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, r2
	bne _08115338
_08115328:
	ldr r0, _08115348  @ =0x00001754
	add r4, r5, r0
	ldrb r0, [r4]
	add r0, r0, #1
	mov r1, #20
	bl __modsi3
	strb r0, [r4]
_08115338:
	bl sub_081154AC
_0811533C:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08115344:
	.4byte 0x00001758
_08115348:
	.4byte 0x00001754
	THUMB_FUNC_END sub_0811510C

