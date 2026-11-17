	THUMB_FUNC_START sub_0803E518
sub_0803E518: @ 0x0803E518
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r4, _0803E538  @ =0xFFFFFD44
	add sp, sp, r4
	mov r7, sp
	ldr r0, _0803E53C  @ =gUnknown_03006A30
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, _0803E540  @ =gUnknown_03006C70
	cmp r0, r1
	bcc _0803E544
	bl _0803F0B4+0x4
_0803E538:
	.4byte 0xFFFFFD44
_0803E53C:
	.4byte gUnknown_03006A30
_0803E540:
	.4byte gUnknown_03006C70
_0803E544:
	ldr r0, _0803E930  @ =gUnknown_03000948
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r3, [r7]
	ldr r4, [r7]
	mov r5, #172
	lsl r5, r5, #2
	add r5, r5, r7
	str r4, [r5]
	ldr r6, [r7]
	mov r4, #173
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	ldr r5, [r7]
	mov r6, #174
	lsl r6, r6, #2
	add r6, r6, r7
	str r5, [r6]
	ldr r4, [r7]
	mov r8, r4
	ldr r5, [r7]
	mov r9, r5
	ldr r6, [r7]
	mov r10, r6
	ldr r4, [r7]
	mov r12, r4
	ldr r5, [r7]
	str r5, [r7, #8]
	ldr r6, [r7]
	str r6, [r7, #12]
	ldr r4, [r7]
	str r4, [r7, #16]
	ldr r5, [r7]
	str r5, [r7, #20]
	ldr r6, [r7]
	str r6, [r7, #24]
	ldr r4, [r7]
	str r4, [r7, #28]
	ldr r5, [r7]
	str r5, [r7, #32]
	ldr r6, [r7]
	str r6, [r7, #36]
	ldr r4, [r7]
	str r4, [r7, #40]
	ldr r5, [r7]
	str r5, [r7, #44]
	ldr r6, [r7]
	str r6, [r7, #48]
	ldr r4, [r7]
	str r4, [r7, #52]
	ldr r5, [r7]
	str r5, [r7, #56]
	ldr r6, [r7]
	str r6, [r7, #60]
	ldr r4, [r7]
	str r4, [r7, #64]
	ldr r5, [r7]
	str r5, [r7, #68]
	ldr r6, [r7]
	str r6, [r7, #72]
	ldr r4, [r7]
	str r4, [r7, #76]
	ldr r5, [r7]
	str r5, [r7, #80]
	ldr r6, [r7]
	str r6, [r7, #84]
	ldr r4, [r7]
	str r4, [r7, #88]
	ldr r5, [r7]
	str r5, [r7, #92]
	ldr r6, [r7]
	str r6, [r7, #96]
	ldr r4, [r7]
	str r4, [r7, #100]
	ldr r5, [r7]
	str r5, [r7, #104]
	ldr r6, [r7]
	str r6, [r7, #108]
	ldr r4, [r7]
	str r4, [r7, #112]
	ldr r5, [r7]
	str r5, [r7, #116]
	ldr r6, [r7, #116]
	str r6, [r7, #120]
	ldr r4, [r7, #116]
	add r4, r4, #63
	str r4, [r7, #124]
	ldr r5, [r7, #124]
	ldrb r6, [r5]
	mov r5, #128
	add r5, r5, r7
	strb r6, [r5]
	mov r4, #0
	mov r5, #136
	add r5, r5, r7
	str r4, [r5]
	mov r6, #128
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #136
	add r6, r6, r7
	ldr r6, [r6]
	and r4, r4, r6
	mov r6, #132
	add r6, r6, r7
	str r4, [r6]
	mov r4, #132
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #140
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #140
	add r6, r6, r7
	ldrb r4, [r6]
	ldr r6, [r7, #124]
	strb r4, [r6]
	ldr r5, [r7, #112]
	mov r6, #144
	add r6, r6, r7
	str r5, [r6]
	ldr r4, [r7, #112]
	add r4, r4, #38
	mov r5, #148
	add r5, r5, r7
	str r4, [r5]
	mov r6, #148
	add r6, r6, r7
	ldr r6, [r6]
	ldrb r4, [r6]
	mov r6, #152
	add r6, r6, r7
	strb r4, [r6]
	mov r4, #0
	mov r5, #160
	add r5, r5, r7
	str r4, [r5]
	mov r6, #152
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #160
	add r6, r6, r7
	ldr r6, [r6]
	and r4, r4, r6
	mov r6, #156
	add r6, r6, r7
	str r4, [r6]
	mov r4, #156
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #164
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #164
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #148
	add r6, r6, r7
	ldr r6, [r6]
	strb r4, [r6]
	ldr r4, [r7, #108]
	mov r5, #168
	add r5, r5, r7
	str r4, [r5]
	ldr r6, [r7, #108]
	add r6, r6, #61
	mov r4, #172
	add r4, r4, r7
	str r6, [r4]
	mov r5, #172
	add r5, r5, r7
	ldr r5, [r5]
	ldrb r6, [r5]
	mov r5, #176
	add r5, r5, r7
	strb r6, [r5]
	mov r6, #0
	mov r4, #184
	add r4, r4, r7
	str r6, [r4]
	mov r5, #176
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #184
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #180
	add r5, r5, r7
	str r6, [r5]
	mov r6, #180
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #188
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #188
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #172
	add r5, r5, r7
	ldr r5, [r5]
	strb r6, [r5]
	ldr r6, [r7, #104]
	mov r4, #192
	add r4, r4, r7
	str r6, [r4]
	ldr r5, [r7, #104]
	add r5, r5, #60
	mov r6, #196
	add r6, r6, r7
	str r5, [r6]
	mov r4, #196
	add r4, r4, r7
	ldr r4, [r4]
	ldrb r5, [r4]
	mov r4, #200
	add r4, r4, r7
	strb r5, [r4]
	mov r5, #0
	mov r6, #208
	add r6, r6, r7
	str r5, [r6]
	mov r4, #200
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #208
	add r4, r4, r7
	ldr r4, [r4]
	and r5, r5, r4
	mov r4, #204
	add r4, r4, r7
	str r5, [r4]
	mov r5, #204
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #212
	add r5, r5, r7
	strb r6, [r5]
	mov r4, #212
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #196
	add r4, r4, r7
	ldr r4, [r4]
	strb r5, [r4]
	ldr r5, [r7, #100]
	mov r6, #216
	add r6, r6, r7
	str r5, [r6]
	ldr r4, [r7, #100]
	add r4, r4, #58
	mov r5, #220
	add r5, r5, r7
	str r4, [r5]
	mov r6, #220
	add r6, r6, r7
	ldr r6, [r6]
	ldrb r4, [r6]
	mov r6, #224
	add r6, r6, r7
	strb r4, [r6]
	mov r4, #0
	mov r5, #232
	add r5, r5, r7
	str r4, [r5]
	mov r6, #224
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #232
	add r6, r6, r7
	ldr r6, [r6]
	and r4, r4, r6
	mov r6, #228
	add r6, r6, r7
	str r4, [r6]
	mov r4, #228
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #236
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #236
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #220
	add r6, r6, r7
	ldr r6, [r6]
	strb r4, [r6]
	ldr r4, [r7, #96]
	mov r5, #240
	add r5, r5, r7
	str r4, [r5]
	ldr r6, [r7, #96]
	add r6, r6, #57
	mov r4, #244
	add r4, r4, r7
	str r6, [r4]
	mov r5, #244
	add r5, r5, r7
	ldr r5, [r5]
	ldrb r6, [r5]
	mov r5, #248
	add r5, r5, r7
	strb r6, [r5]
	mov r6, #0
	mov r4, #128
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #248
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #128
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #252
	add r5, r5, r7
	str r6, [r5]
	mov r6, #252
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #130
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #130
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #244
	add r5, r5, r7
	ldr r5, [r5]
	strb r6, [r5]
	ldr r6, [r7, #92]
	mov r4, #132
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	ldr r5, [r7, #92]
	add r5, r5, #56
	mov r6, #134
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	mov r4, #134
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	ldrb r5, [r4]
	mov r4, #136
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r5, #0
	mov r6, #140
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	mov r4, #136
	lsl r4, r4, #1
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #140
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	and r5, r5, r4
	mov r4, #138
	lsl r4, r4, #1
	add r4, r4, r7
	str r5, [r4]
	mov r5, #138
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #142
	lsl r5, r5, #1
	add r5, r5, r7
	strb r6, [r5]
	mov r4, #142
	lsl r4, r4, #1
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #134
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	strb r5, [r4]
	ldr r5, [r7, #88]
	ldrh r6, [r5, #54]
	mov r5, #144
	lsl r5, r5, #1
	add r5, r5, r7
	strh r6, [r5]
	mov r4, #0
	mov r5, #148
	lsl r5, r5, #1
	add r5, r5, r7
	str r4, [r5]
	mov r6, #144
	lsl r6, r6, #1
	add r6, r6, r7
	ldrh r4, [r6]
	mov r6, #148
	lsl r6, r6, #1
	add r6, r6, r7
	ldr r6, [r6]
	and r4, r4, r6
	mov r6, #146
	lsl r6, r6, #1
	add r6, r6, r7
	str r4, [r6]
	mov r4, #146
	lsl r4, r4, #1
	add r4, r4, r7
	ldrh r5, [r4]
	mov r4, #150
	lsl r4, r4, #1
	add r4, r4, r7
	strh r5, [r4]
	mov r6, #150
	lsl r6, r6, #1
	add r6, r6, r7
	ldrh r4, [r6]
	ldr r6, [r7, #88]
	strh r4, [r6, #54]
	ldr r5, [r7, #84]
	mov r6, #152
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	ldr r4, [r7, #84]
	add r4, r4, #53
	mov r5, #154
	lsl r5, r5, #1
	add r5, r5, r7
	str r4, [r5]
	mov r6, #154
	lsl r6, r6, #1
	add r6, r6, r7
	ldr r6, [r6]
	ldrb r4, [r6]
	mov r6, #156
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r4, #0
	mov r5, #160
	lsl r5, r5, #1
	add r5, r5, r7
	str r4, [r5]
	mov r6, #156
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #160
	lsl r6, r6, #1
	add r6, r6, r7
	ldr r6, [r6]
	and r4, r4, r6
	mov r6, #158
	lsl r6, r6, #1
	add r6, r6, r7
	str r4, [r6]
	mov r4, #158
	lsl r4, r4, #1
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #162
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #162
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #154
	lsl r6, r6, #1
	add r6, r6, r7
	ldr r6, [r6]
	strb r4, [r6]
	ldr r4, [r7, #80]
	mov r5, #164
	lsl r5, r5, #1
	add r5, r5, r7
	str r4, [r5]
	ldr r6, [r7, #80]
	add r6, r6, #52
	mov r4, #166
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #166
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	b _0803E934
	.byte 0x00
	.byte 0x00
_0803E930:
	.4byte gUnknown_03000948
_0803E934:
	ldrb r6, [r5]
	mov r5, #168
	lsl r5, r5, #1
	add r5, r5, r7
	strb r6, [r5]
	mov r6, #0
	mov r4, #172
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #168
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #172
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #170
	lsl r5, r5, #1
	add r5, r5, r7
	str r6, [r5]
	mov r6, #170
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #174
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #174
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #166
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	strb r6, [r5]
	ldr r6, [r7, #76]
	ldrh r4, [r6, #36]
	mov r6, #176
	lsl r6, r6, #1
	add r6, r6, r7
	strh r4, [r6]
	mov r5, #0
	mov r6, #180
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	mov r4, #176
	lsl r4, r4, #1
	add r4, r4, r7
	ldrh r5, [r4]
	mov r4, #180
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	and r5, r5, r4
	mov r4, #178
	lsl r4, r4, #1
	add r4, r4, r7
	str r5, [r4]
	mov r5, #178
	lsl r5, r5, #1
	add r5, r5, r7
	ldrh r6, [r5]
	mov r5, #182
	lsl r5, r5, #1
	add r5, r5, r7
	strh r6, [r5]
	mov r4, #182
	lsl r4, r4, #1
	add r4, r4, r7
	ldrh r5, [r4]
	ldr r4, [r7, #76]
	strh r5, [r4, #36]
	ldr r6, [r7, #72]
	ldrh r4, [r6, #34]
	mov r6, #184
	lsl r6, r6, #1
	add r6, r6, r7
	strh r4, [r6]
	mov r5, #0
	mov r6, #188
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	mov r4, #184
	lsl r4, r4, #1
	add r4, r4, r7
	ldrh r5, [r4]
	mov r4, #188
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	and r5, r5, r4
	mov r4, #186
	lsl r4, r4, #1
	add r4, r4, r7
	str r5, [r4]
	mov r5, #186
	lsl r5, r5, #1
	add r5, r5, r7
	ldrh r6, [r5]
	mov r5, #190
	lsl r5, r5, #1
	add r5, r5, r7
	strh r6, [r5]
	mov r4, #190
	lsl r4, r4, #1
	add r4, r4, r7
	ldrh r5, [r4]
	ldr r4, [r7, #72]
	strh r5, [r4, #34]
	ldr r6, [r7, #68]
	mov r4, #192
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	ldr r5, [r7, #68]
	add r5, r5, #33
	mov r6, #194
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	mov r4, #194
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	ldrb r5, [r4]
	mov r4, #196
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r5, #0
	mov r6, #200
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	mov r4, #196
	lsl r4, r4, #1
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #200
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	and r5, r5, r4
	mov r4, #198
	lsl r4, r4, #1
	add r4, r4, r7
	str r5, [r4]
	mov r5, #198
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #202
	lsl r5, r5, #1
	add r5, r5, r7
	strb r6, [r5]
	mov r4, #202
	lsl r4, r4, #1
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #194
	lsl r4, r4, #1
	add r4, r4, r7
	ldr r4, [r4]
	strb r5, [r4]
	ldr r5, [r7, #64]
	mov r6, #204
	lsl r6, r6, #1
	add r6, r6, r7
	str r5, [r6]
	ldr r4, [r7, #64]
	add r4, r4, #32
	mov r5, #206
	lsl r5, r5, #1
	add r5, r5, r7
	str r4, [r5]
	mov r6, #206
	lsl r6, r6, #1
	add r6, r6, r7
	ldr r6, [r6]
	ldrb r4, [r6]
	mov r6, #208
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r4, #0
	mov r5, #212
	lsl r5, r5, #1
	add r5, r5, r7
	str r4, [r5]
	mov r6, #208
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #212
	lsl r6, r6, #1
	add r6, r6, r7
	ldr r6, [r6]
	and r4, r4, r6
	mov r6, #210
	lsl r6, r6, #1
	add r6, r6, r7
	str r4, [r6]
	mov r4, #210
	lsl r4, r4, #1
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #214
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #214
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #206
	lsl r6, r6, #1
	add r6, r6, r7
	ldr r6, [r6]
	strb r4, [r6]
	ldr r4, [r7, #60]
	ldrb r5, [r4, #31]
	mov r4, #216
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #220
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #216
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #220
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #218
	lsl r5, r5, #1
	add r5, r5, r7
	str r6, [r5]
	mov r6, #218
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #222
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #222
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #60]
	strb r6, [r5, #31]
	ldr r4, [r7, #56]
	ldrb r5, [r4, #30]
	mov r4, #224
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #228
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #224
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #228
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #226
	lsl r5, r5, #1
	add r5, r5, r7
	str r6, [r5]
	mov r6, #226
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #230
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #230
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #56]
	strb r6, [r5, #30]
	ldr r4, [r7, #52]
	ldrb r5, [r4, #27]
	mov r4, #232
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #236
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #232
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #236
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #234
	lsl r5, r5, #1
	add r5, r5, r7
	str r6, [r5]
	mov r6, #234
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #238
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #238
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #52]
	strb r6, [r5, #27]
	ldr r4, [r7, #48]
	ldrb r5, [r4, #20]
	mov r4, #240
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #244
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #240
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #244
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #242
	lsl r5, r5, #1
	add r5, r5, r7
	str r6, [r5]
	mov r6, #242
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #246
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #246
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #48]
	strb r6, [r5, #20]
	ldr r4, [r7, #44]
	ldrb r5, [r4, #19]
	mov r4, #248
	lsl r4, r4, #1
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #252
	lsl r4, r4, #1
	add r4, r4, r7
	str r6, [r4]
	mov r5, #248
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #252
	lsl r5, r5, #1
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #250
	lsl r5, r5, #1
	add r5, r5, r7
	str r6, [r5]
	mov r6, #250
	lsl r6, r6, #1
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #254
	lsl r6, r6, #1
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #254
	lsl r5, r5, #1
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #44]
	strb r6, [r5, #19]
	ldr r4, [r7, #40]
	ldrb r5, [r4, #18]
	mov r4, #128
	lsl r4, r4, #2
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #130
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #128
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #130
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #129
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #129
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #131
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #131
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #40]
	strb r6, [r5, #18]
	ldr r4, [r7, #36]
	ldrb r5, [r4, #17]
	mov r4, #132
	lsl r4, r4, #2
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #134
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #132
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #134
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #133
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #133
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #135
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #135
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #36]
	strb r6, [r5, #17]
	ldr r4, [r7, #32]
	ldrb r5, [r4, #16]
	mov r4, #136
	lsl r4, r4, #2
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #138
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #136
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #138
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #137
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #137
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #139
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #139
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #32]
	strb r6, [r5, #16]
	ldr r4, [r7, #28]
	ldrb r5, [r4, #15]
	mov r4, #140
	lsl r4, r4, #2
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #142
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #140
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #142
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #141
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #141
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #143
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #143
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #28]
	strb r6, [r5, #15]
	ldr r4, [r7, #24]
	ldrb r5, [r4, #14]
	mov r4, #144
	lsl r4, r4, #2
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #146
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #144
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #146
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #145
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #145
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #147
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #147
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #24]
	strb r6, [r5, #14]
	ldr r4, [r7, #20]
	ldrb r5, [r4, #13]
	mov r4, #148
	lsl r4, r4, #2
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #150
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #148
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #150
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #149
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #149
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #151
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #151
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #20]
	strb r6, [r5, #13]
	ldr r4, [r7, #16]
	ldrb r5, [r4, #12]
	mov r4, #152
	lsl r4, r4, #2
	add r4, r4, r7
	strb r5, [r4]
	mov r6, #0
	mov r4, #154
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #152
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #154
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #153
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #153
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #155
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #155
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	ldr r5, [r7, #16]
	strb r6, [r5, #12]
	ldr r4, [r7, #12]
	mov r5, #156
	lsl r5, r5, #2
	add r5, r5, r7
	str r4, [r5]
	ldr r6, [r7, #12]
	add r6, r6, #53
	mov r4, #157
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #157
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	ldrb r6, [r5]
	mov r5, #158
	lsl r5, r5, #2
	add r5, r5, r7
	strb r6, [r5]
	mov r6, #0
	mov r4, #160
	lsl r4, r4, #2
	add r4, r4, r7
	str r6, [r4]
	mov r5, #158
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #160
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	and r6, r6, r5
	mov r5, #159
	lsl r5, r5, #2
	add r5, r5, r7
	str r6, [r5]
	mov r6, #159
	lsl r6, r6, #2
	add r6, r6, r7
	ldrb r4, [r6]
	mov r6, #161
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #161
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #157
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	strb r6, [r5]
	ldr r6, [r7, #8]
	ldrb r4, [r6, #11]
	mov r6, #162
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #0
	mov r6, #164
	lsl r6, r6, #2
	add r6, r6, r7
	str r5, [r6]
	mov r4, #162
	lsl r4, r4, #2
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #164
	lsl r4, r4, #2
	add r4, r4, r7
	ldr r4, [r4]
	and r5, r5, r4
	mov r4, #163
	lsl r4, r4, #2
	add r4, r4, r7
	str r5, [r4]
	mov r5, #163
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #165
	lsl r5, r5, #2
	add r5, r5, r7
	strb r6, [r5]
	mov r4, #165
	lsl r4, r4, #2
	add r4, r4, r7
	ldrb r5, [r4]
	ldr r4, [r7, #8]
	strb r5, [r4, #11]
	mov r6, r12
	ldrb r4, [r6, #10]
	mov r6, #166
	lsl r6, r6, #2
	add r6, r6, r7
	strb r4, [r6]
	mov r5, #0
	mov r6, #168
	lsl r6, r6, #2
	add r6, r6, r7
	str r5, [r6]
	mov r4, #166
	lsl r4, r4, #2
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, #168
	lsl r4, r4, #2
	add r4, r4, r7
	ldr r4, [r4]
	and r5, r5, r4
	mov r4, #167
	lsl r4, r4, #2
	add r4, r4, r7
	str r5, [r4]
	mov r5, #167
	lsl r5, r5, #2
	add r5, r5, r7
	ldrb r6, [r5]
	mov r5, #169
	lsl r5, r5, #2
	add r5, r5, r7
	strb r6, [r5]
	mov r4, #169
	lsl r4, r4, #2
	add r4, r4, r7
	ldrb r5, [r4]
	mov r4, r12
	strb r5, [r4, #10]
	mov r6, r10
	ldrh r6, [r6, #8]
	mov r12, r6
	mov r4, #0
	mov r5, #170
	lsl r5, r5, #2
	add r5, r5, r7
	str r4, [r5]
	mov r6, r12
	mov r4, #170
	lsl r4, r4, #2
	add r4, r4, r7
	ldr r4, [r4]
	and r6, r6, r4
	mov r12, r6
	mov r6, r12
	mov r5, #171
	lsl r5, r5, #2
	add r5, r5, r7
	strh r6, [r5]
	mov r4, #171
	lsl r4, r4, #2
	add r4, r4, r7
	ldrh r5, [r4]
	mov r4, r10
	strh r5, [r4, #8]
	mov r6, r9
	ldrb r6, [r6, #7]
	mov r10, r6
	mov r4, #0
	mov r12, r4
	mov r5, r10
	mov r6, r12
	and r5, r5, r6
	mov r10, r5
	mov r12, r10
	mov r5, r12
	mov r4, r9
	strb r5, [r4, #7]
	mov r6, r8
	ldrb r6, [r6, #6]
	mov r9, r6
	mov r4, #0
	mov r10, r4
	mov r5, r9
	mov r6, r10
	and r5, r5, r6
	mov r9, r5
	mov r10, r9
	mov r5, r10
	mov r4, r8
	strb r5, [r4, #6]
	mov r6, #174
	lsl r6, r6, #2
	add r6, r6, r7
	ldr r6, [r6]
	ldrb r6, [r6, #5]
	mov r8, r6
	mov r4, #0
	mov r9, r4
	mov r5, r8
	mov r6, r9
	and r5, r5, r6
	mov r8, r5
	mov r9, r8
	mov r5, r9
	mov r4, #174
	lsl r4, r4, #2
	add r4, r4, r7
	ldr r4, [r4]
	strb r5, [r4, #5]
	mov r5, #173
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	ldrb r6, [r5, #4]
	mov r5, #174
	lsl r5, r5, #2
	add r5, r5, r7
	strb r6, [r5]
	mov r6, #0
	mov r8, r6
	mov r4, #174
	lsl r4, r4, #2
	add r4, r4, r7
	ldrb r6, [r4]
	mov r4, r8
	and r6, r6, r4
	mov r8, r6
	mov r6, r8
	mov r5, #173
	lsl r5, r5, #2
	add r5, r5, r7
	ldr r5, [r5]
	strb r6, [r5, #4]
	mov r6, #172
	lsl r6, r6, #2
	add r6, r6, r7
	ldr r6, [r6]
	ldrb r5, [r6, #3]
	mov r6, #0
	and r5, r5, r6
	add r6, r5, #0
	mov r4, #172
	lsl r4, r4, #2
	add r4, r4, r7
	ldr r4, [r4]
	strb r6, [r4, #3]
	ldrb r4, [r3, #2]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	strb r5, [r3, #2]
	ldrb r3, [r2, #1]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	strb r4, [r2, #1]
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1]
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #44]
	mov r0, #1
	neg r0, r0
	str r0, [r7, #4]
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r1, r1, #64
	ldr r2, _0803F0B4  @ =0x05000010
	bl CpuSet
	ldr r0, [r7]
	add r1, r0, #0
	add r1, r1, #144
	str r1, [r7]
	bl sub_0803E518+0x14
_0803F0B4:
	@ assembler insists on doing 'add r0, r2, #0' instead for some fucking reason
	@ mov r0, r2
	.2byte 0x0010
	lsl r0, r0, #20
	mov r0, #0
	str r0, [r7, #4]
	add r0, r7, #4
	ldr r1, _0803F0DC  @ =gUnknown_03000840
	ldr r2, _0803F0E0  @ =0x05000040
	bl CpuSet
	mov r3, #175
	lsl r3, r3, #2
	add sp, sp, r3
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803F0DC:
	.4byte gUnknown_03000840
_0803F0E0:
	.4byte 0x05000040
	THUMB_FUNC_END sub_0803E518

