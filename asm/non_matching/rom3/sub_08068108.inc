	THUMB_FUNC_START sub_08068108
sub_08068108: @ 0x08068108
	push {r4-r7,lr}
	mov r2, #192
	lsl r2, r2, #18
	ldr r1, [r2]
	ldr r0, _08068164  @ =0x54463453
	cmp r1, r0
	bne _0806817C
	ldrb r0, [r2, #4]
	cmp r0, #3
	bhi _0806817C
	ldrb r0, [r2, #5]
	cmp r0, #6
	bhi _0806817C
	ldrb r0, [r2, #6]
	cmp r0, #2
	bhi _0806817C
	ldrb r0, [r2, #7]
	cmp r0, #2
	bhi _0806817C
	mov r5, #0
	ldr r7, _08068168  @ =gUnknown_0814C6B4
_08068132:
	lsl r0, r5, #3
	add r2, r0, r7
	ldr r4, _0806816C  @ =gUnknown_03000009
	mov r3, #7
	add r6, r5, #1
_0806813C:
	ldrb r1, [r2]
	ldrb r0, [r4]
	add r4, r4, #1
	add r2, r2, #1
	cmp r1, r0
	bne _0806814E
	sub r3, r3, #1
	cmp r3, #0
	bne _0806813C
_0806814E:
	cmp r3, #0
	beq _08068170
	add r5, r6, #0
	cmp r5, #0
	ble _08068132
	mov r0, #0
	cmp r0, #0
	beq _08068178
_0806815E:
	add r0, r5, #1
	b _080681A0
	.byte 0x00
	.byte 0x00
_08068164:
	.4byte 0x54463453
_08068168:
	.4byte gUnknown_0814C6B4
_0806816C:
	.4byte gUnknown_03000009
_08068170:
	mov r0, #192
	lsl r0, r0, #18
	strb r3, [r0, #9]
	b _0806815E
_08068178:
	mov r0, #0
	b _080681A0
_0806817C:
	mov r4, #192
	lsl r4, r4, #18
	add r0, r4, #0
	bl sub_08067A5C
	lsl r0, r0, #24
	cmp r0, #0
	bgt _0806819C
	ldr r0, _080681A8  @ =gUnknown_0814C6BC
	ldr r2, _080681AC  @ =0x04000004
	add r1, r4, #0
	bl CpuSet
	add r0, r4, #0
	bl sub_08067A48
_0806819C:
	mov r0, #1
	neg r0, r0
_080681A0:
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080681A8:
	.4byte gUnknown_0814C6BC
_080681AC:
	.4byte 0x04000004
	THUMB_FUNC_END sub_08068108

