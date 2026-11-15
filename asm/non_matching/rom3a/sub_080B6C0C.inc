	THUMB_FUNC_START sub_080B6C0C
sub_080B6C0C: @ 0x080B6C0C
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	sub sp, sp, #4
	mov r0, sp
	mov r5, #0
	strh r5, [r0]
	ldr r1, _080B6D1C  @ =0x06008000
	ldr r2, _080B6D20  @ =0x01001000
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	strh r5, [r0]
	ldr r1, _080B6D24  @ =0x06004000
	ldr r2, _080B6D28  @ =0x01002000
	bl CpuSet
	ldr r6, _080B6D2C  @ =gUnknown_02006880
	ldrh r0, [r6]
	mov r9, r0
	ldr r4, _080B6D30  @ =gUnknown_02006882
	ldrh r1, [r4]
	mov r8, r1
	mov r0, #117
	bl sub_0807958C
	mov r2, r9
	strh r2, [r6]
	mov r0, r8
	strh r0, [r4]
	ldr r4, _080B6D34  @ =gRam
	ldr r1, _080B6D38  @ =0x00000CAE
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B6D3C  @ =0x00000CA4
	add r0, r4, r2
	strb r5, [r0]
	sub r1, r1, #9
	add r0, r4, r1
	mov r2, #14
	mov r8, r2
	mov r1, r8
	strb r1, [r0]
	ldr r2, _080B6D40  @ =0x00000CA6
	add r1, r4, r2
	mov r0, #3
	strb r0, [r1]
	mov r0, #202
	lsl r0, r0, #4
	add r1, r4, r0
	mov r6, #255
	ldrb r0, [r1]
	strh r0, [r1]
	bl sub_080795C8
	mov r0, #127
	mov r1, #2
	bl sub_080793C0
	ldr r1, _080B6D44  @ =gUnknown_02000834
	ldr r2, _080B6D48  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _080B6D4C  @ =0x00001AD0
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080B6D50  @ =0x00001AE8
	add r1, r4, r2
	mov r0, #140
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r1, _080B6D54  @ =0x00001643
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _080B6D58  @ =gUnknown_02006885
	strb r6, [r0]
	add r0, r0, #11
	mov r1, #112
	strb r1, [r0]
	add r0, r0, #50
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	ldr r1, _080B6D5C  @ =gUnknown_02006892
	mov r0, #8
	strb r0, [r1]
	ldr r0, _080B6D60  @ =gUnknown_020068B0
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	add r0, r0, #13
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	add r0, r0, #1
	strb r5, [r0]
	ldr r2, _080B6D64  @ =0x0000099D
	add r0, r4, r2
	strb r5, [r0]
	bl sub_080B68F4
	mov r1, #163
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #63
	strh r1, [r0]
	ldr r2, _080B6D68  @ =0x00000A32
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B6D6C  @ =0x00000A2C
	add r0, r4, r1
	mov r1, #8
	strh r1, [r0]
	sub r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r1, _080B6D70  @ =0x00000958
	add r0, r4, r1
	mov r2, r8
	strh r2, [r0]
	ldr r0, _080B6D74  @ =0x00000952
	add r4, r4, r0
	mov r0, #2
	strh r0, [r4]
	add sp, sp, #4
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B6D1C:
	.4byte 0x06008000
_080B6D20:
	.4byte 0x01001000
_080B6D24:
	.4byte 0x06004000
_080B6D28:
	.4byte 0x01002000
_080B6D2C:
	.4byte gUnknown_02006880
_080B6D30:
	.4byte gUnknown_02006882
_080B6D34:
	.4byte gRam
_080B6D38:
	.4byte 0x00000CAE
_080B6D3C:
	.4byte 0x00000CA4
_080B6D40:
	.4byte 0x00000CA6
_080B6D44:
	.4byte gUnknown_02000834
_080B6D48:
	.4byte 0x00007FFF
_080B6D4C:
	.4byte 0x00001AD0
_080B6D50:
	.4byte 0x00001AE8
_080B6D54:
	.4byte 0x00001643
_080B6D58:
	.4byte gUnknown_02006885
_080B6D5C:
	.4byte gUnknown_02006892
_080B6D60:
	.4byte gUnknown_020068B0
_080B6D64:
	.4byte 0x0000099D
_080B6D68:
	.4byte 0x00000A32
_080B6D6C:
	.4byte 0x00000A2C
_080B6D70:
	.4byte 0x00000958
_080B6D74:
	.4byte 0x00000952
	THUMB_FUNC_END sub_080B6C0C

