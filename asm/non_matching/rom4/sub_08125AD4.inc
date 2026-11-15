	THUMB_FUNC_START sub_08125AD4
sub_08125AD4: @ 0x08125AD4
	push {r4-r7,lr}
	ldr r6, _08125ADC  @ =gUnknown_03003DF0
	add r7, r6, #6
	b _08125B32
_08125ADC:
	.4byte gUnknown_03003DF0
_08125AE0:
	ldr r4, _08125B50  @ =gRam
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	ldr r0, _08125B54  @ =0x00001BD0
	add r5, r4, r0
	ldr r2, _08125B58  @ =0x00001BD2
	add r1, r4, r2
	ldrb r0, [r5]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08125B0C
	ldr r3, _08125B5C  @ =0x00001BD1
	add r0, r4, r3
	ldrb r1, [r0]
	sub r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	bl sub_08125D98
	cmp r0, #0
	bne _08125B9E
_08125B0C:
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldr r3, _08125B60  @ =0x00001BCA
	add r1, r4, r3
	ldr r2, _08125B64  @ =0x00001BCC
	add r0, r4, r2
	ldrh r0, [r0]
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
	ldr r0, _08125B68  @ =0x00001BD4
	add r1, r4, r0
	add r2, r2, #10
	add r0, r4, r2
	ldrh r0, [r0]
	ldrh r3, [r1]
	add r0, r0, r3
	strh r0, [r1]
_08125B32:
	bl sub_08125BB0
	ldr r2, [r6]
	ldr r0, _08125B6C  @ =0xFDFF0CD4
	add r1, r2, r0
	mov r0, #127
	and r0, r0, r1
	cmp r0, #32
	bne _08125B78
	ldr r0, _08125B70  @ =0xFFFFFF00
	and r1, r1, r0
	ldr r2, _08125B74  @ =gUnknown_0200F430
	add r0, r1, r2
	b _08125B7A
	.byte 0x00
	.byte 0x00
_08125B50:
	.4byte gRam
_08125B54:
	.4byte 0x00001BD0
_08125B58:
	.4byte 0x00001BD2
_08125B5C:
	.4byte 0x00001BD1
_08125B60:
	.4byte 0x00001BCA
_08125B64:
	.4byte 0x00001BCC
_08125B68:
	.4byte 0x00001BD4
_08125B6C:
	.4byte 0xFDFF0CD4
_08125B70:
	.4byte 0xFFFFFF00
_08125B74:
	.4byte gUnknown_0200F430
_08125B78:
	add r0, r2, #4
_08125B7A:
	str r0, [r6]
	ldr r2, _08125BA4  @ =gRam
	ldr r3, _08125BA8  @ =0x00001BC8
	add r1, r2, r3
	ldrb r0, [r7]
	ldrb r1, [r1]
	cmp r0, r1
	bne _08125AE0
	ldr r1, _08125BAC  @ =0x00001BC7
	add r0, r2, r1
	ldrb r1, [r0]
	sub r3, r3, #3
	add r0, r2, r3
	strb r1, [r0]
	bl sub_08125CC0
	cmp r0, #0
	beq _08125AE0
_08125B9E:
	pop {r4-r7}
	pop {r0}
	bx r0
_08125BA4:
	.4byte gRam
_08125BA8:
	.4byte 0x00001BC8
_08125BAC:
	.4byte 0x00001BC7
	THUMB_FUNC_END sub_08125AD4

