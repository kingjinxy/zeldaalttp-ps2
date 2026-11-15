	THUMB_FUNC_START sub_08128E58
sub_08128E58: @ 0x08128E58
	push {r4,lr}
	ldr r0, _08128E80  @ =gRam
	ldr r2, _08128E84  @ =0x0000098E
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r4, r0, #0
	cmp r1, #0
	bne _08128E90
	ldr r3, _08128E88  @ =0x00001AD2
	add r0, r4, r3
	ldrh r0, [r0]
	ldr r1, _08128E8C  @ =gTextPointer
	add r0, r0, r1
	ldrb r0, [r0]
	add r1, r0, #0
	sub r1, r1, #116
	b _08128EA0
	.byte 0x00
	.byte 0x00
_08128E80:
	.4byte gRam
_08128E84:
	.4byte 0x0000098E
_08128E88:
	.4byte 0x00001AD2
_08128E8C:
	.4byte gTextPointer
_08128E90:
	ldr r2, _08128EE4  @ =0x00001AD2
	add r0, r4, r2
	ldrh r0, [r0]
	ldr r3, _08128EE8  @ =gTextPointer
	add r0, r0, r3
	ldrb r0, [r0]
	add r1, r0, #0
	sub r1, r1, #13
_08128EA0:
	mov r0, #3
	and r1, r1, r0
	ldr r0, _08128EEC  @ =gUnknown_08180C88
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r2, [r0]
	ldr r3, _08128EF0  @ =0x00001AD6
	add r0, r4, r3
	mov r3, #0
	strh r2, [r0]
	ldr r0, _08128EF4  @ =gUnknown_08180C82
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r2, _08128EF8  @ =0x00001AF2
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _08128EFC  @ =0x00001AF0
	add r1, r4, r0
	mov r0, #1
	strh r0, [r1]
	sub r2, r2, #32
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r1, #215
	lsl r1, r1, #5
	add r0, r4, r1
	strh r3, [r0]
	mov r0, #0
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08128EE4:
	.4byte 0x00001AD2
_08128EE8:
	.4byte gTextPointer
_08128EEC:
	.4byte gUnknown_08180C88
_08128EF0:
	.4byte 0x00001AD6
_08128EF4:
	.4byte gUnknown_08180C82
_08128EF8:
	.4byte 0x00001AF2
_08128EFC:
	.4byte 0x00001AF0
	THUMB_FUNC_END sub_08128E58

