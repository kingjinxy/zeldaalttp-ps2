	THUMB_FUNC_START sub_08124A8C
sub_08124A8C: @ 0x08124A8C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _08124B54  @ =gUnknown_020068A4
	add r4, r1, r2
	ldr r3, _08124B58  @ =gRam
	ldr r5, _08124B5C  @ =0x00000DC5
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B60  @ =gUnknown_020068B0
	add r4, r1, r2
	add r5, r5, #20
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B64  @ =gUnknown_020068BC
	add r4, r1, r2
	sub r5, r5, #10
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B68  @ =gUnknown_020068C8
	add r4, r1, r2
	add r5, r5, #20
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B6C  @ =gUnknown_020068D4
	add r4, r1, r2
	ldr r5, _08124B70  @ =0x00000A92
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B74  @ =gUnknown_02006880
	add r4, r1, r2
	ldr r5, _08124B78  @ =0x00000DED
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B7C  @ =gUnknown_0200688C
	add r4, r1, r2
	add r5, r5, #10
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B80  @ =gUnknown_02006898
	add r4, r1, r2
	ldr r5, _08124B84  @ =0x00000A88
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B88  @ =gUnknown_02006906
	add r4, r1, r2
	ldr r5, _08124B8C  @ =0x00000E01
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B90  @ =gUnknown_02006912
	add r4, r1, r2
	add r5, r5, #10
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B94  @ =gUnknown_0200691E
	add r4, r1, r2
	ldr r5, _08124B98  @ =0x00000A9C
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124B9C  @ =gUnknown_0200692A
	add r4, r1, r2
	ldr r5, _08124BA0  @ =0x00000E1F
	add r2, r3, r5
	add r2, r0, r2
	ldrb r2, [r2]
	strb r2, [r4]
	ldr r2, _08124BA4  @ =gUnknown_020068E0
	add r1, r1, r2
	add r5, r5, #20
	add r3, r3, r5
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_08124B54:
	.4byte gUnknown_020068A4
_08124B58:
	.4byte gRam
_08124B5C:
	.4byte 0x00000DC5
_08124B60:
	.4byte gUnknown_020068B0
_08124B64:
	.4byte gUnknown_020068BC
_08124B68:
	.4byte gUnknown_020068C8
_08124B6C:
	.4byte gUnknown_020068D4
_08124B70:
	.4byte 0x00000A92
_08124B74:
	.4byte gUnknown_02006880
_08124B78:
	.4byte 0x00000DED
_08124B7C:
	.4byte gUnknown_0200688C
_08124B80:
	.4byte gUnknown_02006898
_08124B84:
	.4byte 0x00000A88
_08124B88:
	.4byte gUnknown_02006906
_08124B8C:
	.4byte 0x00000E01
_08124B90:
	.4byte gUnknown_02006912
_08124B94:
	.4byte gUnknown_0200691E
_08124B98:
	.4byte 0x00000A9C
_08124B9C:
	.4byte gUnknown_0200692A
_08124BA0:
	.4byte 0x00000E1F
_08124BA4:
	.4byte gUnknown_020068E0
	THUMB_FUNC_END sub_08124A8C

