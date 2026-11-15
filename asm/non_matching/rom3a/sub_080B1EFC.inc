	THUMB_FUNC_START sub_080B1EFC
sub_080B1EFC: @ 0x080B1EFC
	push {r4-r7,lr}
	ldr r2, _080B1F20  @ =gRam
	ldr r1, _080B1F24  @ =0x00000BB3
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #0
	beq _080B1F56
	ldr r2, _080B1F28  @ =0x00000BB4
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #12
	bne _080B1F2C
	bl sub_080B198C
	b _080B1F46
_080B1F20:
	.4byte gRam
_080B1F24:
	.4byte 0x00000BB3
_080B1F28:
	.4byte 0x00000BB4
_080B1F2C:
	ldr r3, _080B1F84  @ =0x00000956
	add r1, r5, r3
	mov r0, #110
	strh r0, [r1]
	mov r1, #183
	lsl r1, r1, #1
	ldr r2, _080B1F88  @ =0x00000BB8
	add r0, r5, r2
	strh r1, [r0]
	sub r3, r3, #6
	add r1, r5, r3
	mov r0, #250
	strh r0, [r1]
_080B1F46:
	ldr r3, _080B1F8C  @ =gRam
	ldr r0, _080B1F90  @ =0x00000BB3
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r5, r3, #0
_080B1F56:
	ldr r1, _080B1F90  @ =0x00000BB3
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #1
	bne _080B1FA0
	ldr r2, _080B1F94  @ =0x00000534
	add r0, r5, r2
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080B1FA0
	ldr r3, _080B1F98  @ =0x00000A4C
	add r1, r5, r3
	ldrh r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	ldr r1, _080B1F9C  @ =0x0000099D
	add r0, r5, r1
	strb r2, [r0]
	b _080B20DE
	.byte 0x00
	.byte 0x00
_080B1F84:
	.4byte 0x00000956
_080B1F88:
	.4byte 0x00000BB8
_080B1F8C:
	.4byte gRam
_080B1F90:
	.4byte 0x00000BB3
_080B1F94:
	.4byte 0x00000534
_080B1F98:
	.4byte 0x00000A4C
_080B1F9C:
	.4byte 0x0000099D
_080B1FA0:
	ldr r2, _080B1FDC  @ =0x00000BB3
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B1FF0
	ldr r3, _080B1FE0  @ =0x00000546
	add r0, r5, r3
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080B1FC6
	ldr r1, _080B1FE4  @ =0x00000534
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080B1FF0
_080B1FC6:
	ldr r2, _080B1FE8  @ =0x00000A4C
	add r1, r5, r2
	ldrh r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	ldr r3, _080B1FEC  @ =0x0000099D
	add r0, r5, r3
	strb r2, [r0]
	b _080B20DE
	.byte 0x00
	.byte 0x00
_080B1FDC:
	.4byte 0x00000BB3
_080B1FE0:
	.4byte 0x00000546
_080B1FE4:
	.4byte 0x00000534
_080B1FE8:
	.4byte 0x00000A4C
_080B1FEC:
	.4byte 0x0000099D
_080B1FF0:
	ldr r0, _080B2004  @ =0x000009EA
	add r4, r5, r0
	ldrh r1, [r4]
	ldrb r0, [r4]
	cmp r0, #0
	beq _080B2008
	sub r0, r1, #1
	strh r0, [r4]
	b _080B2078
	.byte 0x00
	.byte 0x00
_080B2004:
	.4byte 0x000009EA
_080B2008:
	ldr r1, _080B2050  @ =0x00000546
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #112
	and r0, r0, r1
	cmp r0, #0
	beq _080B2078
	mov r0, #70
	mov r1, #0
	bl sub_0812A324
	ldrh r1, [r4]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	add r0, r0, #8
	strh r0, [r4]
	ldr r2, _080B2054  @ =0x00000BB3
	add r3, r5, r2
	ldrb r0, [r3]
	mov r1, #1
	eor r1, r1, r0
	mov r2, #128
	add r0, r1, #0
	orr r0, r0, r2
	strb r0, [r3]
	ldr r0, _080B2058  @ =gUnknown_0816ED10
	add r0, r1, r0
	ldrb r2, [r0]
	ldr r3, _080B205C  @ =0x00000BB4
	add r0, r5, r3
	strb r2, [r0]
	cmp r1, #0
	bne _080B2064
	ldr r0, _080B2060  @ =gUnknown_0816E974
	b _080B2066
_080B2050:
	.4byte 0x00000546
_080B2054:
	.4byte 0x00000BB3
_080B2058:
	.4byte gUnknown_0816ED10
_080B205C:
	.4byte 0x00000BB4
_080B2060:
	.4byte gUnknown_0816E974
_080B2064:
	ldr r0, _080B2070  @ =gUnknown_0816EB34
_080B2066:
	ldr r1, _080B2074  @ =gUnknown_02001600
	mov r2, #115
	bl CpuFastSet
	b _080B20DE
_080B2070:
	.4byte gUnknown_0816EB34
_080B2074:
	.4byte gUnknown_02001600
_080B2078:
	add r1, r5, #0
	ldr r2, _080B20E4  @ =0x00000BB3
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B20DA
	ldr r3, _080B20E8  @ =0x00000545
	add r6, r1, r3
	ldrb r0, [r6]
	mov r2, #12
	ldr r3, _080B20EC  @ =0x00000956
	add r4, r1, r3
	ldr r7, _080B20F0  @ =gUnknown_0816ED04
	and r2, r2, r0
	add r0, r2, r7
	ldrh r3, [r4]
	ldrh r0, [r0]
	cmp r3, r0
	beq _080B20B4
	ldr r0, _080B20F4  @ =gUnknown_0816ECF4
	add r0, r2, r0
	ldrh r0, [r0]
	add r0, r3, r0
	strh r0, [r4]
	mov r2, #128
	lsl r2, r2, #1
	add r0, r0, r2
	ldr r3, _080B20F8  @ =0x00000BB8
	add r1, r1, r3
	strh r0, [r1]
_080B20B4:
	ldrb r0, [r6]
	mov r1, #3
	and r1, r1, r0
	lsl r1, r1, #1
	add r1, r1, #1
	mov r0, #149
	lsl r0, r0, #4
	add r3, r5, r0
	lsl r1, r1, #1
	add r0, r1, r7
	ldrh r2, [r3]
	ldrh r0, [r0]
	cmp r2, r0
	beq _080B20DA
	ldr r0, _080B20F4  @ =gUnknown_0816ECF4
	add r0, r1, r0
	ldrh r0, [r0]
	add r0, r2, r0
	strh r0, [r3]
_080B20DA:
	bl sub_080B23F8
_080B20DE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080B20E4:
	.4byte 0x00000BB3
_080B20E8:
	.4byte 0x00000545
_080B20EC:
	.4byte 0x00000956
_080B20F0:
	.4byte gUnknown_0816ED04
_080B20F4:
	.4byte gUnknown_0816ECF4
_080B20F8:
	.4byte 0x00000BB8
	THUMB_FUNC_END sub_080B1EFC

