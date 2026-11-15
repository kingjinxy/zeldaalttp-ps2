	THUMB_FUNC_START sub_08111EE0
sub_08111EE0: @ 0x08111EE0
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, #1
	ldr r6, _08111FF8  @ =gRam
	ldr r2, _08111FFC  @ =0x00000996
	add r0, r6, r2
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _08111F08
	ldr r3, _08112000  @ =0x00000F92
	add r1, r6, r3
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08111F08:
	ldr r1, _08112000  @ =0x00000F92
	add r0, r6, r1
	add r1, r7, r0
	ldrb r0, [r1]
	cmp r0, #9
	bne _08111F18
	mov r0, #0
	strb r0, [r1]
_08111F18:
	ldr r2, _08112004  @ =0x000016C4
	add r2, r2, r6
	mov r8, r2
	mov r3, #0
	ldrsh r0, [r2, r3]
	ldr r2, _08112008  @ =0x00000EE2
	add r1, r6, r2
	add r1, r7, r1
	ldrb r2, [r1]
	ldr r3, _0811200C  @ =0x00000F02
	add r1, r6, r3
	add r1, r7, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r0, r0, r2
	bl __floatsisf
	add r5, r0, #0
	mov r0, #182
	lsl r0, r0, #5
	add r0, r0, r6
	mov r9, r0
	mov r1, #0
	ldrsh r0, [r0, r1]
	ldr r2, _08112010  @ =0x00000ED2
	add r1, r6, r2
	add r1, r7, r1
	ldrb r2, [r1]
	ldr r3, _08112014  @ =0x00000EF2
	add r1, r6, r3
	add r1, r7, r1
	ldrb r1, [r1]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r0, r0, r2
	bl __floatsisf
	add r4, r0, #0
	add r0, r5, #0
	add r1, r5, #0
	bl __mulsf3
	add r5, r0, #0
	add r0, r4, #0
	add r1, r4, #0
	bl __mulsf3
	add r1, r0, #0
	add r0, r5, #0
	bl __addsf3
	add r4, r0, #0
	mov r0, r8
	ldrh r1, [r0]
	ldr r2, _08112018  @ =0x00000968
	add r0, r6, r2
	strh r1, [r0]
	mov r3, r9
	ldrh r1, [r3]
	add r2, r2, #4
	add r0, r6, r2
	strh r1, [r0]
	add r0, r7, #0
	mov r1, #18
	bl sub_080C2DCC
	ldr r3, _0811201C  @ =0x00000F12
	add r0, r6, r3
	add r0, r7, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #16
	add r0, r6, r3
	add r0, r7, r0
	add r2, r2, #1
	add r1, r6, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r0, r7, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08112020  @ =0x00000FB2
	add r2, r6, r3
	add r2, r7, r2
	mov r1, #3
	eor r0, r0, r1
	lsl r0, r0, #1
	strb r0, [r2]
	ldr r2, _08112024  @ =0x00001082
	add r1, r6, r2
	add r1, r7, r1
	strb r0, [r1]
	ldr r3, _08112028  @ =0x00001710
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #1
	bne _08112030
	ldr r0, _0811202C  @ =gUnknown_02010995
	ldrb r0, [r0]
	cmp r0, #47
	bls _08112030
	add r0, r7, #0
	mov r1, #1
	bl sub_081134D0
	b _08112070
_08111FF8:
	.4byte gRam
_08111FFC:
	.4byte 0x00000996
_08112000:
	.4byte 0x00000F92
_08112004:
	.4byte 0x000016C4
_08112008:
	.4byte 0x00000EE2
_0811200C:
	.4byte 0x00000F02
_08112010:
	.4byte 0x00000ED2
_08112014:
	.4byte 0x00000EF2
_08112018:
	.4byte 0x00000968
_0811201C:
	.4byte 0x00000F12
_08112020:
	.4byte 0x00000FB2
_08112024:
	.4byte 0x00001082
_08112028:
	.4byte 0x00001710
_0811202C:
	.4byte gUnknown_02010995
_08112030:
	ldr r0, _0811207C  @ =gSword
	ldrb r0, [r0]
	cmp r0, #255
	beq _0811205C
	ldr r1, _08112080  @ =0x44AB2000
	add r0, r4, #0
	bl __ltsf2
	cmp r0, #0
	bge _0811205C
	ldr r0, _08112084  @ =gRam
	ldr r1, _08112088  @ =0x000016EA
	add r0, r0, r1
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #7
	bhi _0811205C
	add r0, r7, #0
	bl sub_08113238
_0811205C:
	ldr r1, _0811208C  @ =gUnknown_0817D728
	ldr r0, _08112090  @ =gUnknown_02010992
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r2, [r0]
	add r0, r7, #0
	add r1, r4, #0
	bl _call_via_r2
_08112070:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_0811207C:
	.4byte gSword
_08112080:
	.4byte 0x44AB2000
_08112084:
	.4byte gRam
_08112088:
	.4byte 0x000016EA
_0811208C:
	.4byte gUnknown_0817D728
_08112090:
	.4byte gUnknown_02010992
	THUMB_FUNC_END sub_08111EE0

