	THUMB_FUNC_START sub_0809E034
sub_0809E034: @ 0x0809E034
	push {r4,r5,lr}
	ldr r2, _0809E0A8  @ =gRam
	ldr r1, _0809E0AC  @ =0x00001805
	add r0, r2, r1
	mov r1, #0
	strb r1, [r0]
	ldr r3, _0809E0B0  @ =0x000016F8
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _0809E0B4  @ =0x00001702
	add r0, r2, r4
	strb r1, [r0]
	ldr r3, _0809E0B8  @ =0x0000180D
	add r0, r2, r3
	strb r1, [r0]
	sub r4, r4, #62
	add r0, r2, r4
	ldrh r1, [r0]
	ldr r3, _0809E0BC  @ =0x00001608
	add r0, r2, r3
	mov r3, #0
	strh r1, [r0]
	sub r4, r4, #4
	add r0, r2, r4
	ldrh r1, [r0]
	sub r4, r4, #180
	add r0, r2, r4
	strh r1, [r0]
	ldr r0, _0809E0C0  @ =0x0000180A
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	add r4, r2, #0
	cmp r0, #0
	bge _0809E088
	strb r3, [r1]
	ldr r2, _0809E0C4  @ =0x000016D5
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
_0809E088:
	ldr r1, _0809E0C8  @ =0x00000B0A
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0809E0D4
	ldr r2, _0809E0CC  @ =0x000016CD
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	ldr r3, _0809E0D0  @ =0x000016CE
	add r1, r4, r3
	mov r0, #252
	b _0809E0E0
	.byte 0x00
	.byte 0x00
_0809E0A8:
	.4byte gRam
_0809E0AC:
	.4byte 0x00001805
_0809E0B0:
	.4byte 0x000016F8
_0809E0B4:
	.4byte 0x00001702
_0809E0B8:
	.4byte 0x0000180D
_0809E0BC:
	.4byte 0x00001608
_0809E0C0:
	.4byte 0x0000180A
_0809E0C4:
	.4byte 0x000016D5
_0809E0C8:
	.4byte 0x00000B0A
_0809E0CC:
	.4byte 0x000016CD
_0809E0D0:
	.4byte 0x000016CE
_0809E0D4:
	ldr r1, _0809E120  @ =0x000016CD
	add r0, r4, r1
	strb r3, [r0]
	ldr r2, _0809E124  @ =0x000016CE
	add r1, r4, r2
	mov r0, #4
_0809E0E0:
	strb r0, [r1]
	add r3, r4, #0
	ldr r0, _0809E128  @ =0x00001793
	add r5, r3, r0
	ldrb r0, [r5]
	cmp r0, #2
	bne _0809E0FE
	ldr r2, _0809E120  @ =0x000016CD
	add r1, r3, r2
	mov r2, #0
	mov r0, #16
	strb r0, [r1]
	ldr r1, _0809E124  @ =0x000016CE
	add r0, r3, r1
	strb r2, [r0]
_0809E0FE:
	bl sub_080978AC
	bl sub_08097024
	ldr r2, _0809E12C  @ =0x000016C4
	add r0, r4, r2
	ldr r3, _0809E130  @ =0x0000170C
	add r1, r4, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0809E11A
	mov r0, #2
	strb r0, [r5]
_0809E11A:
	pop {r4,r5}
	pop {r0}
	bx r0
_0809E120:
	.4byte 0x000016CD
_0809E124:
	.4byte 0x000016CE
_0809E128:
	.4byte 0x00001793
_0809E12C:
	.4byte 0x000016C4
_0809E130:
	.4byte 0x0000170C
	THUMB_FUNC_END sub_0809E034

