	THUMB_FUNC_START sub_0811C978
sub_0811C978: @ 0x0811C978
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r4, _0811CA0C  @ =gRam
	ldr r2, _0811CA10  @ =0x00000DC5
	add r0, r4, r2
	add r0, r1, r0
	ldrb r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r6, r4, r3
	strb r0, [r6]
	add r2, r2, #20
	add r0, r4, r2
	add r0, r1, r0
	ldrb r7, [r0]
	add r3, r3, #1
	add r3, r3, r4
	mov r8, r3
	strb r7, [r3]
	sub r2, r2, #10
	add r0, r4, r2
	add r0, r1, r0
	ldrb r0, [r0]
	ldr r3, _0811CA14  @ =0x00000964
	add r5, r4, r3
	strb r0, [r5]
	add r2, r2, #20
	add r0, r4, r2
	add r0, r1, r0
	ldrb r2, [r0]
	add r3, r3, #1
	add r3, r3, r4
	mov r12, r3
	strb r2, [r3]
	ldr r3, _0811CA18  @ =0x000009B2
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0811CA54
	ldr r2, _0811CA1C  @ =0x00000E3D
	add r0, r4, r2
	add r0, r1, r0
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	bne _0811CA2C
	ldr r3, _0811CA20  @ =0x00000C86
	add r0, r4, r3
	ldrh r2, [r0]
	mov r0, #255
	lsl r0, r0, #1
	mov r1, #0
	ldrsh r3, [r6, r1]
	ldr r1, _0811CA24  @ =gUnknown_0814D37A
	and r0, r0, r2
	add r0, r0, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r3, r3, r0
	cmp r3, #3
	ble _0811CA76
_0811C9FE:
	ldr r1, _0811CA28  @ =0x00000C96
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r3, r0
	bge _0811CA76
	b _0811CAD6
	.byte 0x00
	.byte 0x00
_0811CA0C:
	.4byte gRam
_0811CA10:
	.4byte 0x00000DC5
_0811CA14:
	.4byte 0x00000964
_0811CA18:
	.4byte 0x000009B2
_0811CA1C:
	.4byte 0x00000E3D
_0811CA20:
	.4byte 0x00000C86
_0811CA24:
	.4byte gUnknown_0814D37A
_0811CA28:
	.4byte 0x00000C96
_0811CA2C:
	ldr r2, _0811CA4C  @ =0x00000C86
	add r0, r4, r2
	ldrh r2, [r0]
	mov r0, #255
	lsl r0, r0, #1
	mov r1, #0
	ldrsh r3, [r5, r1]
	ldr r1, _0811CA50  @ =gUnknown_0814D3FA
	and r0, r0, r2
	add r0, r0, r1
	mov r2, #0
	ldrsh r0, [r0, r2]
	sub r3, r3, r0
	cmp r3, #5
	ble _0811CA76
	b _0811C9FE
_0811CA4C:
	.4byte 0x00000C86
_0811CA50:
	.4byte gUnknown_0814D3FA
_0811CA54:
	ldr r3, _0811CA7C  @ =0x00000E3D
	add r0, r4, r3
	add r0, r1, r0
	ldrb r1, [r0]
	mov r3, #2
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0811CA88
	ldrh r0, [r6]
	ldr r1, _0811CA80  @ =0x000001FF
	and r1, r1, r0
	cmp r1, #3
	ble _0811CA76
	ldr r0, _0811CA84  @ =0x000001E7
	cmp r1, r0
	ble _0811CAA4
_0811CA76:
	mov r0, #1
	b _0811CAD8
	.byte 0x00
	.byte 0x00
_0811CA7C:
	.4byte 0x00000E3D
_0811CA80:
	.4byte 0x000001FF
_0811CA84:
	.4byte 0x000001E7
_0811CA88:
	ldrh r0, [r5]
	ldr r1, _0811CA9C  @ =0x000001FF
	and r1, r1, r0
	cmp r1, #3
	ble _0811CA76
	ldr r0, _0811CAA0  @ =0x000001EF
	cmp r1, r0
	ble _0811CAC0
	b _0811CA76
	.byte 0x00
	.byte 0x00
_0811CA9C:
	.4byte 0x000001FF
_0811CAA0:
	.4byte 0x000001EF
_0811CAA4:
	add r1, r3, #0
	and r1, r1, r7
	mov r0, r8
	strb r1, [r0]
	ldr r2, _0811CABC  @ =0x000016C1
	add r0, r4, r2
	ldrb r2, [r0]
	add r0, r3, #0
	and r0, r0, r2
	cmp r0, r1
	beq _0811CAD6
	b _0811CA76
_0811CABC:
	.4byte 0x000016C1
_0811CAC0:
	add r1, r3, #0
	and r1, r1, r2
	mov r0, r12
	strb r1, [r0]
	ldr r2, _0811CAE4  @ =0x000016C5
	add r0, r4, r2
	ldrb r2, [r0]
	add r0, r3, #0
	and r0, r0, r2
	cmp r0, r1
	bne _0811CA76
_0811CAD6:
	mov r0, #0
_0811CAD8:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0811CAE4:
	.4byte 0x000016C5
	THUMB_FUNC_END sub_0811C978

