	THUMB_FUNC_START sub_080E10C4
sub_080E10C4: @ 0x080E10C4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r7, #0
	ldr r6, _080E10F4  @ =gRam
	ldr r1, _080E10F8  @ =0x00000F82
	add r0, r6, r1
	add r0, r0, r5
	mov r8, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080E1108
	ldr r1, _080E10FC  @ =0x00000F92
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080E1100
	add r0, r5, #0
	bl sub_080E1544
	b _080E116E
_080E10F4:
	.4byte gRam
_080E10F8:
	.4byte 0x00000F82
_080E10FC:
	.4byte 0x00000F92
_080E1100:
	add r0, r5, #0
	bl sub_080C6240
	b _080E116E
_080E1108:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080E1118
	add r0, r5, #0
	bl sub_080C58F0
	b _080E116E
_080E1118:
	ldr r1, _080E112C  @ =0x00001082
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	cmp r0, #16
	beq _080E1130
	add r0, r0, #1
	strb r0, [r1]
	b _080E116A
	.byte 0x00
	.byte 0x00
_080E112C:
	.4byte 0x00001082
_080E1130:
	ldr r1, _080E1180  @ =0x00000F22
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080E1184  @ =0x00001002
	add r4, r6, r0
	add r4, r5, r4
	mov r0, #1
	neg r0, r0
	strb r0, [r4]
	add r0, r5, #0
	bl sub_080C6F48
	strb r7, [r4]
	ldr r1, _080E1188  @ =0x000015E2
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080E116A
	mov r0, r8
	strb r7, [r0]
	ldr r1, _080E118C  @ =0x00001172
	add r0, r6, r1
	add r0, r5, r0
	strb r7, [r0]
	add r0, r5, #0
	bl sub_080E157C
_080E116A:
	cmp r7, #0
	beq _080E1174
_080E116E:
	add r0, r5, #0
	bl sub_080E15E0
_080E1174:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E1180:
	.4byte 0x00000F22
_080E1184:
	.4byte 0x00001002
_080E1188:
	.4byte 0x000015E2
_080E118C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080E10C4

