	THUMB_FUNC_START sub_08118E48
sub_08118E48: @ 0x08118E48
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	mov r1, #16
	bl sub_080C18C8
	ldr r6, _08118EEC  @ =gRam
	ldr r1, _08118EF0  @ =0x000009AD
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08118E64
	b _08118F5C
_08118E64:
	ldr r1, _08118EF4  @ =0x00000E33
	add r0, r6, r1
	add r0, r5, r0
	ldrb r2, [r0]
	cmp r2, #0
	bne _08118F5C
	ldr r0, _08118EF8  @ =0x00001792
	add r1, r6, r0
	mov r0, #2
	strb r0, [r1]
	ldr r1, _08118EFC  @ =0x00001791
	add r0, r6, r1
	strb r2, [r0]
	ldr r0, _08118F00  @ =0x00000A88
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #0
	bl sub_080BF804
	add r0, r5, #0
	bl sub_080BF774
	add r0, r5, #0
	bl sub_080C1768
	ldr r1, _08118F04  @ =0x00000A92
	add r0, r6, r1
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #128
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #99
	bhi _08118F5C
	mov r0, #228
	strb r0, [r1]
	ldr r1, _08118F08  @ =0x00000E29
	add r0, r6, r1
	add r0, r5, r0
	ldrb r4, [r0]
	ldr r0, _08118F0C  @ =0x00000DC5
	add r3, r6, r0
	add r3, r5, r3
	ldrb r1, [r3]
	add r0, r0, #20
	add r2, r6, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r0, r0, #18
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	ldr r0, _08118F10  @ =gUnknown_0816E294
	add r4, r4, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _08118F14
	mov r0, #150
	lsl r0, r0, #4
	add r1, r6, r0
	mov r0, #4
	b _08118F1C
_08118EEC:
	.4byte gRam
_08118EF0:
	.4byte 0x000009AD
_08118EF4:
	.4byte 0x00000E33
_08118EF8:
	.4byte 0x00001792
_08118EFC:
	.4byte 0x00001791
_08118F00:
	.4byte 0x00000A88
_08118F04:
	.4byte 0x00000A92
_08118F08:
	.4byte 0x00000E29
_08118F0C:
	.4byte 0x00000DC5
_08118F10:
	.4byte gUnknown_0816E294
_08118F14:
	mov r0, #150
	lsl r0, r0, #4
	add r1, r6, r0
	mov r0, #8
_08118F1C:
	strb r0, [r1]
	ldr r2, _08118F50  @ =gRam
	ldr r1, _08118F54  @ =0x00000DCF
	add r3, r2, r1
	add r3, r5, r3
	mov r1, #150
	lsl r1, r1, #4
	add r0, r2, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldrb r0, [r3]
	add r1, r1, r0
	ldr r0, _08118F58  @ =0x00000DE3
	add r2, r2, r0
	add r2, r5, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
	add r0, r5, #0
	bl sub_08119324
	b _08118F62
	.byte 0x00
	.byte 0x00
_08118F50:
	.4byte gRam
_08118F54:
	.4byte 0x00000DCF
_08118F58:
	.4byte 0x00000DE3
_08118F5C:
	add r0, r5, #0
	bl sub_08118F68
_08118F62:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08118E48

