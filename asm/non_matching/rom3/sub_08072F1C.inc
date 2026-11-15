	THUMB_FUNC_START sub_08072F1C
sub_08072F1C: @ 0x08072F1C
	push {r4-r7,lr}
	ldr r1, _08072FCC  @ =gRam
	ldr r2, _08072FD0  @ =0x000009C6
	add r0, r1, r2
	ldrh r6, [r0]
	ldr r3, _08072FD4  @ =0x00001AA6
	add r0, r1, r3
	mov r7, #0
	mov r3, #0
	strh r6, [r0]
	mov r4, #156
	lsl r4, r4, #4
	add r0, r1, r4
	ldrh r2, [r0]
	ldr r4, _08072FD8  @ =0x00001AA8
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08072FDC  @ =0x000009C4
	add r0, r1, r2
	ldrh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08072FE0  @ =0x000009C2
	add r0, r1, r2
	ldrh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08072FE4  @ =0x00000ABE
	add r0, r1, r2
	ldrh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08072FE8  @ =0x00000AB6
	add r0, r1, r2
	ldrh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08072FEC  @ =0x00000ABC
	add r0, r1, r2
	ldrh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08072FF0  @ =0x000009C8
	add r0, r1, r2
	strh r3, [r0]
	ldr r4, _08072FF4  @ =0x00000B9E
	add r0, r1, r4
	strh r3, [r0]
	ldr r2, _08072FF8  @ =0x00000B9C
	add r0, r1, r2
	strh r3, [r0]
	mov r3, #228
	lsl r3, r3, #2
	mov r12, r3
	add r3, r6, #0
	lsl r0, r3, #16
	lsr r2, r0, #16
	add r5, r1, #0
	cmp r2, #127
	bls _08073058
	mov r4, #151
	ldr r6, _08072FFC  @ =0x000009DA
	add r0, r5, r6
	ldrh r2, [r0]
	add r1, r2, #0
	mov r0, #192
	lsl r0, r0, #1
	cmp r1, r0
	bne _0807300C
	ldr r0, _08073000  @ =gUnknown_02002300
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _08072FBE
	b _080730C0
_08072FBE:
	ldr r1, _08073004  @ =0x000009B5
	add r0, r5, r1
	strb r7, [r0]
	ldr r2, _08073008  @ =0x000009AD
	add r1, r5, r2
	b _0807303A
	.byte 0x00
	.byte 0x00
_08072FCC:
	.4byte gRam
_08072FD0:
	.4byte 0x000009C6
_08072FD4:
	.4byte 0x00001AA6
_08072FD8:
	.4byte 0x00001AA8
_08072FDC:
	.4byte 0x000009C4
_08072FE0:
	.4byte 0x000009C2
_08072FE4:
	.4byte 0x00000ABE
_08072FE8:
	.4byte 0x00000AB6
_08072FEC:
	.4byte 0x00000ABC
_08072FF0:
	.4byte 0x000009C8
_08072FF4:
	.4byte 0x00000B9E
_08072FF8:
	.4byte 0x00000B9C
_08072FFC:
	.4byte 0x000009DA
_08073000:
	.4byte gUnknown_02002300
_08073004:
	.4byte 0x000009B5
_08073008:
	.4byte 0x000009AD
_0807300C:
	mov r4, #148
	ldr r0, _08073044  @ =0x00000181
	cmp r1, r0
	beq _080730C0
	mov r4, #147
	add r0, r0, #8
	cmp r1, r0
	beq _080730C0
	ldr r3, _08073048  @ =0xFFFFFE7E
	add r0, r2, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #1
	bhi _08073030
	ldr r4, _0807304C  @ =0x00000A3E
	add r1, r5, r4
	mov r0, #4
	strb r0, [r1]
_08073030:
	ldr r6, _08073050  @ =0x000009B5
	add r0, r5, r6
	strb r7, [r0]
	ldr r0, _08073054  @ =0x000009AD
	add r1, r5, r0
_0807303A:
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080732C0
	.byte 0x00
	.byte 0x00
_08073044:
	.4byte 0x00000181
_08073048:
	.4byte 0xFFFFFE7E
_0807304C:
	.4byte 0x00000A3E
_08073050:
	.4byte 0x000009B5
_08073054:
	.4byte 0x000009AD
_08073058:
	mov r0, #63
	and r0, r0, r3
	cmp r0, #0
	beq _080730A4
	mov r4, #149
	cmp r2, #3
	beq _080730C0
	cmp r2, #5
	beq _080730C0
	cmp r2, #7
	beq _080730C0
	mov r4, #156
	cmp r2, #67
	beq _080730C0
	cmp r2, #69
	beq _080730C0
	cmp r2, #71
	beq _080730C0
	cmp r2, #112
	bne _08073090
	ldr r0, _0807308C  @ =gUnknown_020022F0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080730C0
	mov r4, #159
	b _080730C0
_0807308C:
	.4byte gUnknown_020022F0
_08073090:
	mov r4, #150
	ldr r1, _080730A0  @ =0x0000165E
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080730C0
	mov r4, #159
	b _080730C0
_080730A0:
	.4byte 0x0000165E
_080730A4:
	mov r4, #157
	mov r2, #64
	add r0, r2, #0
	and r0, r0, r6
	cmp r0, #0
	bne _080730C0
	mov r4, #158
	ldr r0, _08073150  @ =gUnknown_02002300
	ldrb r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080730C0
	mov r4, #157
_080730C0:
	mov r2, #156
	lsl r2, r2, #4
	add r3, r5, r2
	mov r2, #0
	mov r6, r12
	strh r6, [r3]
	ldr r1, _08073154  @ =0x000009C6
	add r0, r5, r1
	strh r4, [r0]
	ldr r6, _08073158  @ =0x000009C8
	add r0, r5, r6
	strh r4, [r0]
	ldr r1, _0807315C  @ =0xFFFFFC00
	add r0, r1, #0
	add r0, r0, r12
	mov r6, #248
	lsl r6, r6, #4
	add r1, r6, #0
	and r0, r0, r1
	lsr r0, r0, #7
	ldr r6, _08073160  @ =0x000009C4
	add r1, r5, r6
	strh r0, [r1]
	ldrh r0, [r3]
	sub r0, r0, #16
	mov r1, #62
	and r0, r0, r1
	asr r0, r0, #1
	ldr r3, _08073164  @ =0x000009C2
	add r1, r5, r3
	strh r0, [r1]
	add r6, r6, #250
	add r0, r5, r6
	strh r2, [r0]
	ldr r1, _08073168  @ =0x00000AB6
	add r0, r5, r1
	strh r2, [r0]
	add r3, r3, #250
	add r0, r5, r3
	strh r2, [r0]
	sub r6, r6, #235
	add r1, r5, r6
	mov r0, #130
	strb r0, [r1]
	ldr r0, _0807316C  @ =0x000009B4
	add r1, r5, r0
	mov r0, #22
	strb r0, [r1]
	ldr r2, _08073170  @ =0x000009B5
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
	mov r3, #163
	lsl r3, r3, #3
	add r1, r5, r3
	ldr r0, _08073174  @ =0x0000FC40
	strh r0, [r1]
	ldr r6, _08073178  @ =0x0000051E
	add r1, r5, r6
	ldr r0, _0807317C  @ =0x00003648
	strh r0, [r1]
	cmp r4, #148
	bne _08073184
	ldr r1, _08073180  @ =0x00000998
	add r0, r5, r1
	mov r1, #8
	strb r1, [r0]
	sub r2, r2, #28
	add r0, r5, r2
	strb r1, [r0]
	b _08073188
	.byte 0x00
	.byte 0x00
_08073150:
	.4byte gUnknown_02002300
_08073154:
	.4byte 0x000009C6
_08073158:
	.4byte 0x000009C8
_0807315C:
	.4byte 0xFFFFFC00
_08073160:
	.4byte 0x000009C4
_08073164:
	.4byte 0x000009C2
_08073168:
	.4byte 0x00000AB6
_0807316C:
	.4byte 0x000009B4
_08073170:
	.4byte 0x000009B5
_08073174:
	.4byte 0x0000FC40
_08073178:
	.4byte 0x0000051E
_0807317C:
	.4byte 0x00003648
_08073180:
	.4byte 0x00000998
_08073184:
	bl sub_08072D8C
_08073188:
	cmp r4, #159
	bne _08073196
	ldr r0, _080731E8  @ =gRam
	ldr r3, _080731EC  @ =0x00000A3E
	add r0, r0, r3
	mov r1, #4
	strb r1, [r0]
_08073196:
	cmp r4, #151
	beq _08073220
	cmp r4, #148
	beq _08073220
	cmp r4, #147
	beq _08073220
	cmp r4, #157
	beq _08073220
	cmp r4, #158
	beq _08073220
	cmp r4, #159
	beq _08073220
	cmp r4, #149
	beq _08073228
	cmp r4, #156
	beq _08073220
	ldr r1, _080731E8  @ =gRam
	ldr r4, _080731F0  @ =0x00001AA6
	add r0, r1, r4
	ldrh r4, [r0]
	mov r2, #0
	add r5, r1, #0
	cmp r4, #91
	beq _08073210
	cmp r4, #27
	bne _080731FC
	ldr r6, _080731F4  @ =0x000009AD
	add r0, r1, r6
	ldrb r0, [r0]
	cmp r0, #35
	beq _080731DE
	cmp r0, #44
	beq _080731DE
	ldr r3, _080731F8  @ =0x000009B5
	add r0, r1, r3
	strb r2, [r0]
_080731DE:
	mov r4, #163
	lsl r4, r4, #3
	add r1, r5, r4
	b _08073246
	.byte 0x00
	.byte 0x00
_080731E8:
	.4byte gRam
_080731EC:
	.4byte 0x00000A3E
_080731F0:
	.4byte 0x00001AA6
_080731F4:
	.4byte 0x000009AD
_080731F8:
	.4byte 0x000009B5
_080731FC:
	ldr r6, _0807320C  @ =0x000009B5
	add r0, r1, r6
	strb r2, [r0]
	mov r0, #163
	lsl r0, r0, #3
	add r1, r1, r0
	b _08073246
	.byte 0x00
	.byte 0x00
_0807320C:
	.4byte 0x000009B5
_08073210:
	mov r3, #163
	lsl r3, r3, #3
	add r2, r1, r3
	ldrh r1, [r2]
	mov r0, #3
	orr r0, r0, r1
	strh r0, [r2]
	b _0807324A
_08073220:
	cmp r4, #149
	beq _08073228
	cmp r4, #156
	bne _0807324A
_08073228:
	ldr r1, _080732C8  @ =gRam
	ldr r4, _080732CC  @ =0x0000051E
	add r2, r1, r4
	mov r3, #0
	mov r0, #63
	strh r0, [r2]
	ldr r6, _080732D0  @ =0x00000998
	add r0, r1, r6
	strb r3, [r0]
	ldr r2, _080732D4  @ =0x00000999
	add r0, r1, r2
	strb r3, [r0]
	mov r3, #163
	lsl r3, r3, #3
	add r1, r1, r3
_08073246:
	ldr r0, _080732D8  @ =0x0000FC43
	strh r0, [r1]
_0807324A:
	bl sub_08077D48
	ldr r3, _080732C8  @ =gRam
	ldr r4, _080732DC  @ =0x000009C8
	add r0, r3, r4
	ldrh r0, [r0]
	cmp r0, #148
	bne _0807326A
	ldr r6, _080732E0  @ =0x00000956
	add r2, r3, r6
	ldrh r1, [r2]
	mov r4, #128
	lsl r4, r4, #1
	add r0, r4, #0
	orr r0, r0, r1
	strh r0, [r2]
_0807326A:
	ldr r6, _080732E4  @ =0x00001AA6
	add r0, r3, r6
	ldrh r1, [r0]
	ldr r2, _080732E8  @ =0x000009C6
	add r0, r3, r2
	strh r1, [r0]
	ldr r4, _080732EC  @ =0x00001AA8
	add r0, r3, r4
	ldrh r1, [r0]
	mov r6, #156
	lsl r6, r6, #4
	add r0, r3, r6
	strh r1, [r0]
	ldr r1, _080732F0  @ =0x00001AAA
	add r0, r3, r1
	ldrh r1, [r0]
	sub r2, r2, #2
	add r0, r3, r2
	strh r1, [r0]
	add r4, r4, #4
	add r0, r3, r4
	ldrh r1, [r0]
	add r6, r6, #2
	add r0, r3, r6
	strh r1, [r0]
	ldr r1, _080732F4  @ =0x00001AAE
	add r0, r3, r1
	ldrh r1, [r0]
	add r2, r2, #250
	add r0, r3, r2
	strh r1, [r0]
	add r4, r4, #4
	add r0, r3, r4
	ldrh r1, [r0]
	add r6, r6, #244
	add r0, r3, r6
	strh r1, [r0]
	ldr r1, _080732F8  @ =0x00001AB2
	add r0, r3, r1
	ldrh r1, [r0]
	sub r2, r2, #2
	add r0, r3, r2
	strh r1, [r0]
_080732C0:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080732C8:
	.4byte gRam
_080732CC:
	.4byte 0x0000051E
_080732D0:
	.4byte 0x00000998
_080732D4:
	.4byte 0x00000999
_080732D8:
	.4byte 0x0000FC43
_080732DC:
	.4byte 0x000009C8
_080732E0:
	.4byte 0x00000956
_080732E4:
	.4byte 0x00001AA6
_080732E8:
	.4byte 0x000009C6
_080732EC:
	.4byte 0x00001AA8
_080732F0:
	.4byte 0x00001AAA
_080732F4:
	.4byte 0x00001AAE
_080732F8:
	.4byte 0x00001AB2
	THUMB_FUNC_END sub_08072F1C

