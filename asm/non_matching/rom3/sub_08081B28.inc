	THUMB_FUNC_START sub_08081B28
sub_08081B28: @ 0x08081B28
	push {r4,r5,lr}
	ldr r2, _08081BE0  @ =gUnknown_0200DBA0
	add r1, r0, r2
	mov r2, #2
	strb r2, [r1]
	ldr r3, _08081BE4  @ =gUnknown_0200DBA1
	add r1, r0, r3
	mov r4, #0
	strb r4, [r1]
	ldr r5, _08081BE8  @ =gUnknown_0200CC60
	add r1, r0, r5
	strb r2, [r1]
	ldr r3, _08081BEC  @ =gUnknown_0200CC61
	add r1, r0, r3
	strb r4, [r1]
	ldr r5, _08081BF0  @ =gUnknown_0200DBE0
	add r1, r0, r5
	mov r3, #1
	strb r3, [r1]
	ldr r5, _08081BF4  @ =gUnknown_0200CC20
	add r1, r0, r5
	strb r3, [r1]
	ldr r5, _08081BF8  @ =gUnknown_0200DBA2
	add r1, r0, r5
	strb r4, [r1]
	add r5, r5, #1
	add r1, r0, r5
	strb r2, [r1]
	ldr r5, _08081BFC  @ =gUnknown_0200CC62
	add r1, r0, r5
	strb r4, [r1]
	ldr r4, _08081C00  @ =gUnknown_0200CC63
	add r1, r0, r4
	strb r2, [r1]
	ldr r5, _08081C04  @ =gUnknown_0200DBE3
	add r1, r0, r5
	strb r3, [r1]
	sub r4, r4, #64
	add r1, r0, r4
	strb r3, [r1]
	ldr r5, _08081C08  @ =gUnknown_0200CBA0
	add r1, r0, r5
	strb r2, [r1]
	ldr r3, _08081C0C  @ =gUnknown_0200CBA3
	add r1, r0, r3
	strb r2, [r1]
	sub r4, r4, #67
	add r1, r0, r4
	strb r2, [r1]
	add r5, r5, #67
	add r1, r0, r5
	strb r2, [r1]
	ldr r1, _08081C10  @ =gUnknown_0200CBE1
	add r3, r0, r1
	ldr r2, _08081C14  @ =gRam
	mov r4, #150
	lsl r4, r4, #4
	add r2, r2, r4
	ldrb r1, [r2]
	strb r1, [r3]
	sub r5, r5, #1
	add r3, r0, r5
	ldrb r1, [r2]
	strb r1, [r3]
	ldr r1, _08081C18  @ =gUnknown_0200DBE1
	add r3, r0, r1
	ldrb r1, [r2]
	strb r1, [r3]
	ldr r4, _08081C1C  @ =gUnknown_0200DBE2
	add r3, r0, r4
	ldrb r1, [r2]
	strb r1, [r3]
	add r5, r5, #63
	add r3, r0, r5
	ldrb r1, [r2]
	strb r1, [r3]
	ldr r1, _08081C20  @ =gUnknown_0200CC22
	add r3, r0, r1
	ldrb r1, [r2]
	strb r1, [r3]
	add r4, r4, #63
	add r3, r0, r4
	ldrb r1, [r2]
	strb r1, [r3]
	ldr r5, _08081C24  @ =gUnknown_0200DC22
	add r0, r0, r5
	ldrb r1, [r2]
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08081BE0:
	.4byte gUnknown_0200DBA0
_08081BE4:
	.4byte gUnknown_0200DBA1
_08081BE8:
	.4byte gUnknown_0200CC60
_08081BEC:
	.4byte gUnknown_0200CC61
_08081BF0:
	.4byte gUnknown_0200DBE0
_08081BF4:
	.4byte gUnknown_0200CC20
_08081BF8:
	.4byte gUnknown_0200DBA2
_08081BFC:
	.4byte gUnknown_0200CC62
_08081C00:
	.4byte gUnknown_0200CC63
_08081C04:
	.4byte gUnknown_0200DBE3
_08081C08:
	.4byte gUnknown_0200CBA0
_08081C0C:
	.4byte gUnknown_0200CBA3
_08081C10:
	.4byte gUnknown_0200CBE1
_08081C14:
	.4byte gRam
_08081C18:
	.4byte gUnknown_0200DBE1
_08081C1C:
	.4byte gUnknown_0200DBE2
_08081C20:
	.4byte gUnknown_0200CC22
_08081C24:
	.4byte gUnknown_0200DC22
	THUMB_FUNC_END sub_08081B28

