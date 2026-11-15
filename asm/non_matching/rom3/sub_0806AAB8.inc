	THUMB_FUNC_START sub_0806AAB8
sub_0806AAB8: @ 0x0806AAB8
	push {r4,r5,lr}
	bl sub_080C1B40
	ldr r1, _0806AB54  @ =gUnknown_0814C970
	ldr r4, _0806AB58  @ =gRam
	ldr r2, _0806AB5C  @ =0x000009AD
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r3, _0806AB60  @ =0x000009B2
	add r0, r4, r3
	mov r5, #0
	ldrsb r5, [r0, r5]
	cmp r5, #0
	bne _0806AB08
	ldr r1, _0806AB64  @ =0x000009C6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #15
	bne _0806AAF0
	ldr r2, _0806AB68  @ =0x000017E1
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
_0806AAF0:
	ldr r3, _0806AB6C  @ =0x00001719
	add r1, r4, r3
	mov r0, #6
	strb r0, [r1]
	bl sub_080975B4
	ldr r1, _0806AB70  @ =0x000016D7
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0806AB74  @ =0x000016D6
	add r0, r4, r2
	strb r5, [r0]
_0806AB08:
	ldr r1, _0806AB58  @ =gRam
	ldr r3, _0806AB78  @ =0x000016D5
	add r0, r1, r3
	ldrb r0, [r0]
	lsr r2, r0, #1
	ldr r3, _0806AB60  @ =0x000009B2
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r3, r1, #0
	cmp r0, #0
	bne _0806AB30
	mov r2, #0
	ldr r1, _0806AB7C  @ =0x00000A1C
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #67
	bne _0806AB30
	mov r2, #1
_0806AB30:
	ldr r0, _0806AB80  @ =gUnknown_0814C978
	add r0, r2, r0
	ldrb r1, [r0]
	ldr r2, _0806AB84  @ =0x000016CC
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #91
	add r0, r3, r2
	strb r1, [r0]
	bl sub_08096F30
	bl sub_080A3EE0
	bl sub_08075A44
	pop {r4,r5}
	pop {r0}
	bx r0
_0806AB54:
	.4byte gUnknown_0814C970
_0806AB58:
	.4byte gRam
_0806AB5C:
	.4byte 0x000009AD
_0806AB60:
	.4byte 0x000009B2
_0806AB64:
	.4byte 0x000009C6
_0806AB68:
	.4byte 0x000017E1
_0806AB6C:
	.4byte 0x00001719
_0806AB70:
	.4byte 0x000016D7
_0806AB74:
	.4byte 0x000016D6
_0806AB78:
	.4byte 0x000016D5
_0806AB7C:
	.4byte 0x00000A1C
_0806AB80:
	.4byte gUnknown_0814C978
_0806AB84:
	.4byte 0x000016CC
	THUMB_FUNC_END sub_0806AAB8

