	THUMB_FUNC_START sub_0811BBA4
sub_0811BBA4: @ 0x0811BBA4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r1, _0811BC00  @ =gRam
	ldr r2, _0811BC04  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	mov r9, r1
	cmp r0, #0
	bne _0811BC1E
	ldr r0, _0811BC08  @ =0x00001832
	add r0, r0, r9
	add r5, r6, r0
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _0811BC1E
	ldr r0, _0811BC0C  @ =0x00000E29
	add r0, r0, r9
	add r4, r6, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _0811BBF0
	add r0, r6, #0
	mov r1, #41
	bl sub_080C19F8
_0811BBF0:
	ldrb r0, [r4]
	cmp r0, #11
	bne _0811BC14
	ldr r0, _0811BC10  @ =0x00000E15
	add r0, r0, r9
	add r0, r6, r0
	strb r7, [r0]
	b _0811BDA8
_0811BC00:
	.4byte gRam
_0811BC04:
	.4byte 0x000009AD
_0811BC08:
	.4byte 0x00001832
_0811BC0C:
	.4byte 0x00000E29
_0811BC10:
	.4byte 0x00000E15
_0811BC14:
	ldr r0, _0811BDB8  @ =gUnknown_0817F593
	ldrb r1, [r4]
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r5]
_0811BC1E:
	ldr r4, _0811BDBC  @ =0x00000971
	add r4, r4, r9
	mov r3, #0
	mov r0, #8
	strb r0, [r4]
	ldr r1, _0811BDC0  @ =0x00001724
	add r1, r1, r9
	mov r0, #48
	strb r0, [r1]
	ldr r0, _0811BDC4  @ =0x00001723
	add r0, r0, r9
	strb r3, [r0]
	ldr r0, _0811BDC8  @ =0x00000974
	add r0, r0, r9
	strb r3, [r0]
	ldr r1, _0811BDCC  @ =0x00000975
	add r1, r1, r9
	mov r0, #50
	strb r0, [r1]
	ldr r0, _0811BDD0  @ =0x00000E29
	add r0, r0, r9
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _0811BDD4  @ =gUnknown_0817F72D
	add r0, r1, r0
	ldrb r2, [r0]
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r9
	strb r2, [r0]
	ldr r2, _0811BDD8  @ =gUnknown_0817F724
	ldr r0, _0811BDDC  @ =gUnknown_0817F59E
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	lsl r1, r1, #25
	lsr r1, r1, #24
	lsl r2, r1, #1
	ldr r0, _0811BDE0  @ =0x00000968
	add r0, r0, r9
	strb r2, [r0]
	ldr r0, _0811BDE4  @ =0x00000969
	add r0, r0, r9
	strb r3, [r0]
	ldr r0, _0811BDE8  @ =0x00000E1F
	add r0, r0, r9
	add r0, r6, r0
	strb r1, [r0]
	mov r5, r9
	ldr r3, _0811BDEC  @ =0x00000964
	add r3, r3, r5
	mov r10, r3
	add r7, r4, #0
	mov r8, r0
_0811BC8C:
	ldr r1, _0811BDF0  @ =0x00000DC5
	add r0, r5, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r2, _0811BDF4  @ =0x00000DD9
	add r0, r5, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _0811BDF8  @ =gUnknown_03002B90
	strh r1, [r3]
	sub r2, r2, #10
	add r0, r5, r2
	add r0, r6, r0
	ldrb r2, [r0]
	ldr r3, _0811BDFC  @ =0x00000DE3
	add r0, r5, r3
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	mov r0, r10
	strh r2, [r0]
	ldr r3, _0811BE00  @ =gUnknown_0817F81C
	mov r0, #0
	ldrsb r0, [r7, r0]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	add r1, r1, r0
	ldr r3, _0811BE04  @ =0x00000958
	add r0, r5, r3
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r0, _0811BDF8  @ =gUnknown_03002B90
	strh r1, [r0]
	ldr r1, _0811BE08  @ =gUnknown_0817F82E
	mov r0, #0
	ldrsb r0, [r7, r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	add r2, r2, r0
	ldr r1, _0811BE0C  @ =0x00000952
	add r0, r5, r1
	ldrh r0, [r0]
	sub r2, r2, r0
	mov r3, r10
	strh r2, [r3]
	add r1, r1, #15
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _0811BD34
	ldr r2, _0811BE10  @ =0x00000965
	add r0, r5, r2
	mov r4, #0
	ldrsb r4, [r0, r4]
	cmp r4, #0
	bne _0811BD34
	mov r3, r8
	ldrb r0, [r3]
	mov r1, #24
	bl sub_080C18C8
	ldr r0, _0811BDF8  @ =gUnknown_03002B90
	ldrh r1, [r0]
	ldr r2, _0811BE14  @ =0x00000978
	add r0, r5, r2
	strh r1, [r0]
	mov r3, r10
	ldrh r1, [r3]
	add r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	ldr r3, _0811BE18  @ =gUnknown_03002B9C
	strh r4, [r3]
	mov r1, r8
	ldrb r0, [r1]
	bl sub_0811B50C
_0811BD34:
	ldrb r0, [r7]
	sub r0, r0, #1
	strb r0, [r7]
	lsl r0, r0, #24
	ldr r2, _0811BE1C  @ =gRam
	mov r9, r2
	cmp r0, #0
	bge _0811BC8C
	ldr r0, _0811BDD0  @ =0x00000E29
	add r0, r0, r9
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #3
	bne _0811BDA8
	ldr r0, _0811BE20  @ =0x00001832
	add r0, r0, r9
	add r0, r6, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _0811BDA8
	ldr r0, _0811BDF0  @ =0x00000DC5
	add r0, r0, r9
	add r0, r6, r0
	ldrb r1, [r0]
	mov r0, #150
	lsl r0, r0, #4
	add r0, r0, r9
	mov r4, #0
	strb r1, [r0]
	ldr r0, _0811BDF4  @ =0x00000DD9
	add r0, r0, r9
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _0811BE24  @ =0x00000961
	add r0, r0, r9
	strb r1, [r0]
	ldr r0, _0811BE28  @ =0x00000DCF
	add r0, r0, r9
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _0811BDEC  @ =0x00000964
	add r0, r0, r9
	strb r1, [r0]
	ldr r0, _0811BDFC  @ =0x00000DE3
	add r0, r0, r9
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r0, _0811BE10  @ =0x00000965
	add r0, r0, r9
	strb r1, [r0]
	bl sub_08085FAC
	ldr r0, _0811BE2C  @ =0x00001663
	add r0, r0, r9
	strb r4, [r0]
	ldr r0, _0811BE30  @ =0x0000166A
	add r0, r0, r9
	strb r4, [r0]
_0811BDA8:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811BDB8:
	.4byte gUnknown_0817F593
_0811BDBC:
	.4byte 0x00000971
_0811BDC0:
	.4byte 0x00001724
_0811BDC4:
	.4byte 0x00001723
_0811BDC8:
	.4byte 0x00000974
_0811BDCC:
	.4byte 0x00000975
_0811BDD0:
	.4byte 0x00000E29
_0811BDD4:
	.4byte gUnknown_0817F72D
_0811BDD8:
	.4byte gUnknown_0817F724
_0811BDDC:
	.4byte gUnknown_0817F59E
_0811BDE0:
	.4byte 0x00000968
_0811BDE4:
	.4byte 0x00000969
_0811BDE8:
	.4byte 0x00000E1F
_0811BDEC:
	.4byte 0x00000964
_0811BDF0:
	.4byte 0x00000DC5
_0811BDF4:
	.4byte 0x00000DD9
_0811BDF8:
	.4byte gUnknown_03002B90
_0811BDFC:
	.4byte 0x00000DE3
_0811BE00:
	.4byte gUnknown_0817F81C
_0811BE04:
	.4byte 0x00000958
_0811BE08:
	.4byte gUnknown_0817F82E
_0811BE0C:
	.4byte 0x00000952
_0811BE10:
	.4byte 0x00000965
_0811BE14:
	.4byte 0x00000978
_0811BE18:
	.4byte gUnknown_03002B9C
_0811BE1C:
	.4byte gRam
_0811BE20:
	.4byte 0x00001832
_0811BE24:
	.4byte 0x00000961
_0811BE28:
	.4byte 0x00000DCF
_0811BE2C:
	.4byte 0x00001663
_0811BE30:
	.4byte 0x0000166A
	THUMB_FUNC_END sub_0811BBA4

