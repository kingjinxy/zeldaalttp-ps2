	THUMB_FUNC_START sub_080BAC54
sub_080BAC54: @ 0x080BAC54
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _080BAD30  @ =gRam
	ldr r1, _080BAD34  @ =0x00000996
	add r0, r4, r1
	ldrb r0, [r0]
	mov r2, #3
	mov r8, r2
	mov r1, r8
	and r1, r1, r0
	mov r8, r1
	ldr r0, _080BAD38  @ =gUnknown_08170B42
	add r0, r0, r8
	ldrb r0, [r0]
	ldr r1, _080BAD3C  @ =gUnknown_08170B46
	add r1, r1, r8
	ldrb r2, [r1]
	mov r1, #2
	bl sub_080B93A8
	mov r5, #2
	ldr r2, _080BAD40  @ =0x00000FF4
	add r1, r4, r2
	mov r0, #98
	strb r0, [r1]
	ldr r0, _080BAD44  @ =0x00001124
	add r1, r4, r0
	mov r0, #57
	strb r0, [r1]
	mov r0, #24
	bl sub_080CF370
	ldr r1, _080BAD48  @ =0x000015DC
	add r0, r4, r1
	strb r5, [r0]
	mov r0, #2
	bl sub_080C1F70
	mov r0, #2
	bl SpriteActive_MainLong
	mov r2, #1
	mov r8, r2
	add r6, r4, #0
	ldr r0, _080BAD4C  @ =0x00001032
	add r0, r0, r6
	mov r10, r0
_080BACB8:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080BAD50  @ =0x00000FD2
	add r0, r6, r1
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _080BACCE
	sub r0, r0, #1
	strb r0, [r3]
_080BACCE:
	ldr r0, _080BAD54  @ =0x00001122
	add r2, r6, r0
	add r2, r5, r2
	ldr r1, _080BAD58  @ =0x00000F22
	add r0, r6, r1
	add r0, r5, r0
	ldrb r1, [r0]
	lsr r1, r1, #1
	mov r0, #64
	and r1, r1, r0
	ldr r0, _080BAD5C  @ =gUnknown_08171026
	add r0, r0, r8
	ldrb r0, [r0]
	eor r1, r1, r0
	strb r1, [r2]
	ldr r2, _080BAD60  @ =0x00000FC2
	add r0, r6, r2
	add r1, r5, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _080BAD04
	mov r0, #128
	strb r0, [r1]
	ldr r1, _080BAD64  @ =0x00000F62
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
_080BAD04:
	ldr r2, _080BAD64  @ =0x00000F62
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BAD6C
	ldr r0, _080BAD68  @ =0x00000F92
	add r2, r6, r0
	add r2, r5, r2
	ldr r1, _080BAD34  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r1, #1
	and r0, r0, r1
	add r0, r0, #2
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080B9318
	b _080BADA6
	.byte 0x00
	.byte 0x00
_080BAD30:
	.4byte gRam
_080BAD34:
	.4byte 0x00000996
_080BAD38:
	.4byte gUnknown_08170B42
_080BAD3C:
	.4byte gUnknown_08170B46
_080BAD40:
	.4byte 0x00000FF4
_080BAD44:
	.4byte 0x00001124
_080BAD48:
	.4byte 0x000015DC
_080BAD4C:
	.4byte 0x00001032
_080BAD50:
	.4byte 0x00000FD2
_080BAD54:
	.4byte 0x00001122
_080BAD58:
	.4byte 0x00000F22
_080BAD5C:
	.4byte gUnknown_08171026
_080BAD60:
	.4byte 0x00000FC2
_080BAD64:
	.4byte 0x00000F62
_080BAD68:
	.4byte 0x00000F92
_080BAD6C:
	ldrb r1, [r3]
	cmp r1, #0
	bne _080BADA6
	ldr r2, _080BAE6C  @ =0x00000F72
	add r0, r6, r2
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #8
	bne _080BAD80
	strb r1, [r4]
_080BAD80:
	ldrb r1, [r4]
	mov r0, #7
	and r0, r0, r1
	ldr r1, _080BAE70  @ =gUnknown_0817102A
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r0, _080BAE74  @ =0x00000F92
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r3, #1
	mov r0, #1
	and r0, r0, r2
	eor r0, r0, r3
	strb r0, [r1]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080BADA6:
	add r0, r5, #0
	mov r1, #20
	mov r2, #1
	bl sub_080BD874
	ldr r1, _080BAE78  @ =0x00001012
	add r7, r6, r1
	add r1, r5, r7
	mov r0, #0
	strb r0, [r1]
	mov r2, r10
	add r0, r5, r2
	mov r1, #16
	mov r9, r1
	mov r2, r9
	strb r2, [r0]
	mov r0, #4
	bl sub_080CF370
	add r0, r5, #0
	bl sub_080C6230
	mov r0, r8
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r8, r1
	cmp r0, #0
	blt _080BADE2
	b _080BACB8
_080BADE2:
	add r0, r5, #1
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r4, r6, #0
	ldr r2, _080BAE7C  @ =0x00000FC2
	add r0, r4, r2
	add r3, r5, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080BAE0A
	ldr r0, _080BAE74  @ =0x00000F92
	add r2, r4, r0
	add r2, r5, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #7
	and r0, r0, r1
	strb r0, [r2]
	mov r0, #4
	strb r0, [r3]
_080BAE0A:
	ldr r1, _080BAE80  @ =gUnknown_08171016
	add r0, r7, #0
	sub r0, r0, #128
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _080BAE84  @ =0x0000072A
	add r0, r7, r2
	mov r4, #0
	strh r1, [r0]
	mov r1, #136
	lsl r1, r1, #1
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #32
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #26
	mov r2, #2
	bl sub_080BD874
	add r0, r5, r7
	strb r4, [r0]
	add r0, r7, #0
	add r0, r0, #32
	add r0, r5, r0
	mov r2, r9
	strb r2, [r0]
	mov r0, #4
	bl sub_080CF370
	add r0, r5, #0
	bl sub_080C6230
	ldr r1, _080BAE88  @ =0x000005CA
	add r0, r7, r1
	strb r5, [r0]
	add r0, r5, #0
	bl sub_080CA58C
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080BAE6C:
	.4byte 0x00000F72
_080BAE70:
	.4byte gUnknown_0817102A
_080BAE74:
	.4byte 0x00000F92
_080BAE78:
	.4byte 0x00001012
_080BAE7C:
	.4byte 0x00000FC2
_080BAE80:
	.4byte gUnknown_08171016
_080BAE84:
	.4byte 0x0000072A
_080BAE88:
	.4byte 0x000005CA
	THUMB_FUNC_END sub_080BAC54

