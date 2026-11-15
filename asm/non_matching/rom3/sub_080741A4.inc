	THUMB_FUNC_START sub_080741A4
sub_080741A4: @ 0x080741A4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r1, _08074248  @ =gUnknown_0814D6D4
	ldr r7, _0807424C  @ =gRam
	ldr r2, _08074250  @ =gUnknown_03002BDD
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	ldr r3, _08074254  @ =0x00000952
	add r1, r7, r3
	ldrh r0, [r1]
	mov r10, r0
	ldr r2, _08074258  @ =0x00000958
	add r3, r7, r2
	ldrh r0, [r3]
	str r0, [sp, #4]
	sub r2, r2, #8
	add r4, r7, r2
	ldrh r0, [r4]
	mov r9, r0
	add r2, r2, #6
	add r5, r7, r2
	ldrh r0, [r5]
	str r0, [sp]
	add r2, r2, #210
	add r0, r7, r2
	ldrh r2, [r0]
	mov r0, r10
	add r0, r0, r2
	mov r8, r0
	strh r0, [r1]
	ldr r1, _0807425C  @ =0x00000A2A
	add r0, r7, r1
	ldrh r1, [r0]
	ldrh r0, [r3]
	add r6, r1, r0
	strh r6, [r3]
	ldrh r3, [r4]
	add r2, r2, r3
	strh r2, [r4]
	ldrh r0, [r5]
	add r1, r1, r0
	strh r1, [r5]
	ldr r3, _08074260  @ =0x00000A2C
	add r0, r7, r3
	mov r3, r8
	strh r3, [r0]
	mov r3, #163
	lsl r3, r3, #4
	add r0, r7, r3
	strh r6, [r0]
	sub r3, r3, #2
	add r0, r7, r3
	strh r2, [r0]
	ldr r2, _08074264  @ =0x00000A32
	add r0, r7, r2
	strh r1, [r0]
	ldr r3, _08074250  @ =gUnknown_03002BDD
	ldrb r0, [r3]
	cmp r0, #35
	beq _08074230
	cmp r0, #44
	bne _0807426C
_08074230:
	ldr r1, _08074268  @ =0x00000A4C
	add r0, r7, r1
	ldrh r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #12
	bls _08074270
	bl sub_080C1B40
	b _08074270
	.byte 0x00
	.byte 0x00
_08074248:
	.4byte gUnknown_0814D6D4
_0807424C:
	.4byte gRam
_08074250:
	.4byte gUnknown_03002BDD
_08074254:
	.4byte 0x00000952
_08074258:
	.4byte 0x00000958
_0807425C:
	.4byte 0x00000A2A
_08074260:
	.4byte 0x00000A2C
_08074264:
	.4byte 0x00000A32
_08074268:
	.4byte 0x00000A4C
_0807426C:
	bl sub_080C1B40
_08074270:
	ldr r1, _080742B4  @ =gRam
	ldr r2, _080742B8  @ =0x00000952
	add r0, r1, r2
	mov r3, r10
	strh r3, [r0]
	add r2, r2, #6
	add r0, r1, r2
	mov r3, sp
	ldrh r3, [r3, #4]
	strh r3, [r0]
	sub r2, r2, #8
	add r0, r1, r2
	mov r3, r9
	strh r3, [r0]
	ldr r0, _080742BC  @ =0x00000956
	add r1, r1, r0
	mov r2, sp
	ldrh r2, [r2]
	strh r2, [r1]
	bl sub_080A3EE0
	bl sub_080AA6D8
	bl sub_0807407C
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080742B4:
	.4byte gRam
_080742B8:
	.4byte 0x00000952
_080742BC:
	.4byte 0x00000956
	THUMB_FUNC_END sub_080741A4

