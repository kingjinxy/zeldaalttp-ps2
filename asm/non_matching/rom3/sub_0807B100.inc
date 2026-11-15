	THUMB_FUNC_START sub_0807B100
sub_0807B100: @ 0x0807B100
	push {r4-r7,lr}
	add r5, r0, #0
	ldr r0, _0807B208  @ =gRam
	ldr r2, _0807B20C  @ =0x00001770
	add r1, r0, r2
	ldrb r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	beq _0807B114
	b _0807B230
_0807B114:
	ldr r3, _0807B210  @ =0x00001702
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _0807B120
	b _0807B230
_0807B120:
	bl sub_08079884
	add r2, r0, #0
	mov r4, #0
	ldr r3, _0807B214  @ =gUnknown_0200CBA0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #58
	bne _0807B13C
	ldr r7, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #58
	beq _0807B1CC
_0807B13C:
	mov r4, #1
	cmp r1, #59
	bne _0807B14C
	ldr r1, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #59
	beq _0807B1CC
_0807B14C:
	add r2, r2, #64
	mov r4, #0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #58
	bne _0807B162
	ldr r7, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #58
	beq _0807B1CC
_0807B162:
	mov r4, #1
	cmp r1, #59
	bne _0807B172
	ldr r1, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #59
	beq _0807B1CC
_0807B172:
	mov r2, #150
	lsl r2, r2, #4
	add r0, r6, r2
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	mov r7, #0
	ldrsh r2, [r0, r7]
	mov r4, #0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #58
	bne _0807B196
	ldr r7, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #58
	beq _0807B1CC
_0807B196:
	mov r4, #1
	cmp r1, #59
	bne _0807B1A6
	ldr r1, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #59
	beq _0807B1CC
_0807B1A6:
	add r2, r2, #64
	mov r4, #0
	add r0, r2, r3
	ldrb r1, [r0]
	cmp r1, #58
	bne _0807B1BC
	ldr r3, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #58
	beq _0807B1CC
_0807B1BC:
	cmp r1, #59
	bne _0807B230
	ldr r7, _0807B218  @ =gUnknown_0200CBA1
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #59
	bne _0807B230
	mov r4, #1
_0807B1CC:
	ldr r1, _0807B21C  @ =gUnknown_0200CBE0
	add r0, r2, r1
	ldr r3, _0807B214  @ =gUnknown_0200CBA0
	add r1, r2, r3
	ldrb r3, [r1]
	ldrb r0, [r0]
	ldr r6, _0807B208  @ =gRam
	cmp r0, r3
	bne _0807B230
	ldr r7, _0807B220  @ =gUnknown_0200CBE1
	add r0, r2, r7
	sub r7, r7, #64
	add r1, r2, r7
	ldrb r0, [r0]
	ldrb r7, [r1]
	cmp r0, r7
	bne _0807B230
	ldr r7, _0807B224  @ =0x00000978
	add r0, r6, r7
	strb r3, [r0]
	ldrb r1, [r1]
	ldr r3, _0807B228  @ =0x00000979
	add r0, r6, r3
	strb r1, [r0]
	ldr r7, _0807B22C  @ =0x00000B5E
	add r0, r6, r7
	strh r2, [r0]
	str r4, [r5]
	mov r0, #1
	b _0807B238
_0807B208:
	.4byte gRam
_0807B20C:
	.4byte 0x00001770
_0807B210:
	.4byte 0x00001702
_0807B214:
	.4byte gUnknown_0200CBA0
_0807B218:
	.4byte gUnknown_0200CBA1
_0807B21C:
	.4byte gUnknown_0200CBE0
_0807B220:
	.4byte gUnknown_0200CBE1
_0807B224:
	.4byte 0x00000978
_0807B228:
	.4byte 0x00000979
_0807B22C:
	.4byte 0x00000B5E
_0807B230:
	ldr r0, _0807B240  @ =0x00000B5E
	add r1, r6, r0
	mov r0, #0
	strh r0, [r1]
_0807B238:
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0807B240:
	.4byte 0x00000B5E
	THUMB_FUNC_END sub_0807B100

