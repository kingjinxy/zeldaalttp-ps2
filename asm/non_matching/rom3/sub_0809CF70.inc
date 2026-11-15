	THUMB_FUNC_START sub_0809CF70
sub_0809CF70: @ 0x0809CF70
	push {r4-r6,lr}
	ldr r4, _0809D03C  @ =gRam
	ldr r1, _0809D040  @ =0x000016E9
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _0809CF84
	b _0809D0E4
_0809CF84:
	ldr r0, _0809D044  @ =0x000016E8
	add r5, r4, r0
	ldrb r1, [r5]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _0809CFE4
	ldr r1, _0809D048  @ =0x00000547
	add r0, r4, r1
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809CFA8
	b _0809D0E4
_0809CFA8:
	ldr r0, _0809D04C  @ =0x0000172C
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _0809CFC6
	bl sub_0809FD78
	ldr r1, _0809D050  @ =0x0000097C
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #48
	and r0, r0, r1
	cmp r0, #48
	beq _0809CFC6
	b _0809D0E4
_0809CFC6:
	ldrb r0, [r5]
	mov r1, #128
	orr r0, r0, r1
	strb r0, [r5]
	bl sub_0809CEA0
	ldr r0, _0809D054  @ =0x00001705
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
	ldr r1, _0809D058  @ =0x000016D4
	add r0, r4, r1
	strb r6, [r0]
_0809CFE4:
	ldr r4, _0809D03C  @ =gRam
	ldr r0, _0809D05C  @ =0x00000545
	add r5, r4, r0
	ldrb r1, [r5]
	mov r6, #128
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0809D002
	ldr r1, _0809D044  @ =0x000016E8
	add r2, r4, r1
	ldrb r1, [r2]
	mov r0, #1
	orr r0, r0, r1
	strb r0, [r2]
_0809D002:
	bl sub_080A38AC
	ldr r0, _0809D060  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _0809D064  @ =0x000016EB
	add r2, r4, r1
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809D0E0
	ldr r0, _0809D068  @ =0x000016EA
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #8
	bls _0809D06C
	ldrb r0, [r1]
	bl sub_0809D0EC
	b _0809D0E4
_0809D03C:
	.4byte gRam
_0809D040:
	.4byte 0x000016E9
_0809D044:
	.4byte 0x000016E8
_0809D048:
	.4byte 0x00000547
_0809D04C:
	.4byte 0x0000172C
_0809D050:
	.4byte 0x0000097C
_0809D054:
	.4byte 0x00001705
_0809D058:
	.4byte 0x000016D4
_0809D05C:
	.4byte 0x00000545
_0809D060:
	.4byte 0x00001727
_0809D064:
	.4byte 0x000016EB
_0809D068:
	.4byte 0x000016EA
_0809D06C:
	ldrb r1, [r1]
	ldr r0, _0809D0AC  @ =gUnknown_0816808C
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	cmp r1, #5
	bne _0809D0B4
	ldr r0, _0809D0B0  @ =gSword
	ldrb r0, [r0]
	cmp r0, #1
	bls _0809D08E
	cmp r0, #255
	beq _0809D08E
	mov r0, #4
	mov r1, #38
	bl sub_080AC29C
_0809D08E:
	mov r1, #1
	ldr r0, _0809D0B0  @ =gSword
	ldrb r0, [r0]
	cmp r0, #0
	beq _0809D0E0
	cmp r0, #255
	beq _0809D0E0
	cmp r0, #1
	beq _0809D0A2
	mov r1, #6
_0809D0A2:
	add r0, r1, #0
	bl sub_0809EEB4
	b _0809D0E0
	.byte 0x00
	.byte 0x00
_0809D0AC:
	.4byte gUnknown_0816808C
_0809D0B0:
	.4byte gSword
_0809D0B4:
	cmp r1, #3
	bls _0809D0E0
	ldr r1, _0809D0DC  @ =0x000016E8
	add r2, r4, r1
	ldrb r3, [r2]
	mov r0, #1
	and r0, r0, r3
	cmp r0, #0
	beq _0809D0E0
	ldrb r1, [r5]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809D0E0
	mov r0, #254
	and r0, r0, r3
	strb r0, [r2]
	bl sub_0809CEA0
	b _0809D0E4
_0809D0DC:
	.4byte 0x000016E8
_0809D0E0:
	bl sub_0809D348
_0809D0E4:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809CF70

	.byte 0x00
	.byte 0x00
