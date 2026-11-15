	THUMB_FUNC_START sub_0811D994
sub_0811D994: @ 0x0811D994
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080BF00C
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0811D9B6
	mov r0, #4
	bl sub_080A3DA0
	b _0811DC78
_0811D9B6:
	ldr r2, _0811DA2C  @ =gRam
	mov r0, sp
	ldrb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	strb r1, [r0]
	mov r3, #4
	add r5, r2, #0
	ldr r4, _0811DA30  @ =0x00000964
	add r1, r5, r4
	ldr r0, _0811DA34  @ =0x000016FA
	add r7, r5, r0
_0811D9D0:
	mov r4, #150
	lsl r4, r4, #4
	add r0, r5, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r3, r0
	beq _0811DA48
	ldr r0, _0811DA38  @ =0x00000E15
	add r6, r2, r0
	add r0, r3, r6
	ldrb r0, [r0]
	cmp r0, #44
	bne _0811DA48
	mov r4, #0
	strb r3, [r1]
	ldr r0, _0811DA3C  @ =0x0000177A
	add r2, r5, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	cmp r0, r1
	bne _0811DA04
	strb r4, [r2]
_0811DA04:
	add r0, r3, #0
	bl sub_0811F264
	mov r0, sp
	ldrb r0, [r0]
	add r0, r0, r6
	strb r4, [r0]
	ldr r1, _0811DA40  @ =0x00000BC4
	add r0, r5, r1
	strb r4, [r0]
	ldr r3, _0811DA44  @ =0x00001719
	add r2, r5, r3
	ldrb r0, [r2]
	cmp r0, #18
	beq _0811DA24
	b _0811DC78
_0811DA24:
	strb r4, [r7]
	strb r4, [r2]
	b _0811DC78
	.byte 0x00
	.byte 0x00
_0811DA2C:
	.4byte gRam
_0811DA30:
	.4byte 0x00000964
_0811DA34:
	.4byte 0x000016FA
_0811DA38:
	.4byte 0x00000E15
_0811DA3C:
	.4byte 0x0000177A
_0811DA40:
	.4byte 0x00000BC4
_0811DA44:
	.4byte 0x00001719
_0811DA48:
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r0, #0
	bge _0811D9D0
	mov r0, #93
	bl sub_080C1A8C
	ldr r4, _0811DBB4  @ =gRam
	mov r1, sp
	ldr r5, _0811DBB8  @ =0x00000E1F
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	mov r2, #0
	strb r2, [r0]
	mov r1, sp
	ldr r3, _0811DBBC  @ =0x00000DED
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	sub r5, r5, #40
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	add r3, r3, #60
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r5, _0811DBC0  @ =0x00001844
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r3, _0811DBC4  @ =0x00001832
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	sub r5, r5, #13
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	add r3, r3, #41
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	sub r5, r5, #16
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #12
	strb r1, [r0]
	mov r1, sp
	ldr r3, _0811DBC8  @ =0x00000E33
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #18
	strb r1, [r0]
	mov r1, sp
	sub r5, r5, #15
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r3, _0811DBCC  @ =0x00000A92
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	sub r5, r5, #5
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	mov r3, #196
	lsl r3, r3, #5
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r5, _0811DBD0  @ =0x00000DBB
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	sub r3, r3, #68
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #9
	strb r1, [r0]
	mov r1, sp
	ldr r5, _0811DBD4  @ =0x0000186B
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r0, sp
	ldr r2, _0811DBD8  @ =0x00000E3D
	add r1, r4, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r3, _0811DBDC  @ =0x000016D5
	add r5, r4, r3
	ldrb r0, [r5]
	lsr r0, r0, #1
	strb r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080AD98C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0811DBF8
	mov r5, #182
	lsl r5, r5, #5
	add r0, r4, r5
	ldrh r0, [r0]
	add r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r2, r4, r1
	strh r0, [r2]
	ldr r3, _0811DBE0  @ =0x000016C4
	add r0, r4, r3
	ldrh r0, [r0]
	add r0, r0, #8
	ldr r5, _0811DBE4  @ =0x00000964
	add r3, r4, r5
	strh r0, [r3]
	mov r1, sp
	ldr r5, _0811DBE8  @ =0x00000DC5
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r2]
	strb r1, [r0]
	mov r1, sp
	ldr r2, _0811DBEC  @ =0x00000DD9
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r5, _0811DBF0  @ =0x00000961
	add r1, r4, r5
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, sp
	sub r2, r2, #10
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r3]
	strb r1, [r0]
	mov r1, sp
	ldr r3, _0811DBF4  @ =0x00000DE3
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	add r5, r5, #4
	add r1, r4, r5
	ldrb r1, [r1]
	strb r1, [r0]
	b _0811DC78
_0811DBB4:
	.4byte gRam
_0811DBB8:
	.4byte 0x00000E1F
_0811DBBC:
	.4byte 0x00000DED
_0811DBC0:
	.4byte 0x00001844
_0811DBC4:
	.4byte 0x00001832
_0811DBC8:
	.4byte 0x00000E33
_0811DBCC:
	.4byte 0x00000A92
_0811DBD0:
	.4byte 0x00000DBB
_0811DBD4:
	.4byte 0x0000186B
_0811DBD8:
	.4byte 0x00000E3D
_0811DBDC:
	.4byte 0x000016D5
_0811DBE0:
	.4byte 0x000016C4
_0811DBE4:
	.4byte 0x00000964
_0811DBE8:
	.4byte 0x00000DC5
_0811DBEC:
	.4byte 0x00000DD9
_0811DBF0:
	.4byte 0x00000961
_0811DBF4:
	.4byte 0x00000DE3
_0811DBF8:
	mov r0, #182
	lsl r0, r0, #5
	add r2, r4, r0
	ldr r1, _0811DC80  @ =gUnknown_0817FA20
	ldrb r0, [r5]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r1, #150
	lsl r1, r1, #4
	add r2, r4, r1
	strh r0, [r2]
	mov r1, sp
	ldr r3, _0811DC84  @ =0x00000DC5
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r2]
	strb r1, [r0]
	mov r1, sp
	ldr r2, _0811DC88  @ =0x00000DD9
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r3, _0811DC8C  @ =0x00000961
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _0811DC90  @ =0x000016C4
	add r2, r4, r0
	ldr r1, _0811DC94  @ =gUnknown_0817FA28
	ldrb r0, [r5]
	lsr r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r1, _0811DC98  @ =0x00000964
	add r2, r4, r1
	strh r0, [r2]
	mov r1, sp
	ldr r3, _0811DC9C  @ =0x00000DCF
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldrb r1, [r2]
	strb r1, [r0]
	mov r1, sp
	ldr r5, _0811DCA0  @ =0x00000DE3
	add r0, r4, r5
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r2, _0811DCA4  @ =0x00000965
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_0811D828
_0811DC78:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_0811DC80:
	.4byte gUnknown_0817FA20
_0811DC84:
	.4byte 0x00000DC5
_0811DC88:
	.4byte 0x00000DD9
_0811DC8C:
	.4byte 0x00000961
_0811DC90:
	.4byte 0x000016C4
_0811DC94:
	.4byte gUnknown_0817FA28
_0811DC98:
	.4byte 0x00000964
_0811DC9C:
	.4byte 0x00000DCF
_0811DCA0:
	.4byte 0x00000DE3
_0811DCA4:
	.4byte 0x00000965
	THUMB_FUNC_END sub_0811D994

